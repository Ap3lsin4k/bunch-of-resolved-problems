from os import listdir
import os
import cv2

import numpy as np

pictures_num = int(input("Введіть число фотографій для однієї ділянки:"))



params = list()
final = "final/" # path to save images
i = 0
filename_extension = None
dim = 1080, 960

try:
    os.mkdir("final")
except OSError:
    print ("Directory %s already exists" % "final")
else:
    print ("Successfully created the directory %s " % "final")
print("Ім'я файлу", "\t\t", "Коефіцієнт чіткості")
for path_to_file in listdir("images"):
    img = cv2.imread("images/" + path_to_file, cv2.IMREAD_GRAYSCALE)
    if filename_extension == None:
        filename_extension = path_to_file.split('.')[-1]  # get the filename extension
    laplacian_var = cv2.Laplacian(img, cv2.CV_64F).var()
    params.append((laplacian_var, path_to_file, img))

    string_to_print = path_to_file+" "+str(laplacian_var)
    if laplacian_var < 5:
        string_to_print += " - дуже розмита"
    elif laplacian_var < 20:
        string_to_print += " - розмита"
    elif laplacian_var < 50:
        string_to_print += " - несфокусована"
    
    #cv2.imshow("Img", img)
    print(string_to_print)
    i += 1
    if i is pictures_num:
        best_picture = max(params)  # laplacian_var, name
        print("The winner:", best_picture[1], best_picture[0])
        print()
        # cv2.imshow("Img", cv2.imread("images/" + best_picture[1], cv2.IMREAD_GRAYSCALE))  # showing the best picture
        i = 0
        params = list()
        image_to_save = img = cv2.imread("images/" + best_picture[1])
 #       image_to_save.save()
        cv2.imwrite(final+best_picture[1], image_to_save)

def panorama():
    images = []
    for path_to_file in listdir(final):
        img = cv2.imread(final+path_to_file, cv2.IMREAD_COLOR)
        img = cv2.resize(img,dim,interpolation = cv2.INTER_AREA)
        images.append(img)
    # stitcher = cv2.createStitcher()\n",
    stitcher = cv2.Stitcher.create()
    ret, pano = stitcher.stitch(images)

    if ret == cv2.STITCHER_OK:
        cv2.imshow('Panorama', pano)
        if filename_extension != None:
            try:
                cv2.imwrite('Result.'+filename_extension, pano)
            except:
                print("Error #1")
                cv2.imwrite('Result.JPG', pano)
        else:
            cv2.imwrite('Result.JPG', pano)
        cv2.waitKey()
        cv2.destroyAllWindows()
    else:
        print("Error during Stitching", ret)
# todo save
panorama()
cv2.waitKey(0)
cv2.destroyAllWindows()
