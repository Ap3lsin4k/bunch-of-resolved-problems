a=[]
n=30
s= set()
for i in range(n):
    a.append([i*i+x*x for x in range(n-i)])
for i in range(n):
    for x in range(n-i):
        s.add(i*i+x*x)

print()
def table():
    for k in range(40):
        l = str(4*k)+"\t"
        # ponytail
        for t in range(4):
            cond = ((4*k+t) in s)
            l += "Y"  if cond else "_"
        print(l)
table()
print("calculated")

for line in a:
    print(line)
