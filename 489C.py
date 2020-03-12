m, s = list(map(int, input().split()))

if m is 1:
    error = not (0<= s and s <= 9)
else:
    error = not(1 <= s and s<= m*9)


if error:
    print("-1 -1")
elif m is 1:
    print(s, s)
elif 1 <= s and s <=9:
    print('1'+"0"*(m-2)+str(s-1),
          str(s)+'0'*(m-1))
7
