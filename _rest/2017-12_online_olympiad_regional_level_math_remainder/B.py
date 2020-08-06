# for big numbers
a=b=1
for i in range(int(input())%60):
    a,b = b, b+a
print(a%10)