from PIL import Image
width, length = 1008, 1344
result=Image.new('RGB', (3*length, 3*width))
with open("coordinates.txt") as f:
    for string in f.readlines():
        array = string.split()
        name = array[0]
        lat = int(array[1])
        long = int(array[2])
        try:
            image = Image.open(name)
            width, length = image.size
            print(width, length)
            result.paste(im=image, box=(long*width,lat*length))
        except FileNotFoundError: # if file can not be opened show message
            print("FileNotFoundError: [Errno 2] No such file: '11.JPG'")
            print("Не знайдено файл з таким іменем: '11.JPG'")

result.save("result.JPG")
