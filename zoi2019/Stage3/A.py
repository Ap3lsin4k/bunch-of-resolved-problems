a=[]
n=20

for i in range(n):
    a.append([i*i+x*x for x in range(n-i)])

print("calculated")

for line in a:
    print(line)
