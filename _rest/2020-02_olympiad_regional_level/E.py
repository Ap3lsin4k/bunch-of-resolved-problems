debug = False
n = int(input())
#start with 1
#sum of Children
wakedChild = (n+2)*[1]
# key - comander, value executor
struct = {} #cortage
myOneLineInput = list(map(int, input().split()))
for i in range(1, n+1):
    if not myOneLineInput[i-1] in struct:
        struct[myOneLineInput[i-1]] = [i]
    else:
        struct[myOneLineInput[i-1]].append(i)



q = int(input())


def wake(s):
    print(s, wakedChild)
    if not s in struct:
        wakedChild[s] = 1
        return wakedChild[s]
    
    queue = struct[s].copy()
    wakedChild[s]=1
    for military in queue:
        
        wakedChild[s] += wake(military)
    
    return wakedChild[s]
wake(0)
for test in range(q):
    typ, s =  list(map(int, input().split()))
    
    
    if typ is 3:
        #list of executors
        print(wakedChild[s]-1)
        
    elif typ is 2: #go to bed young dreamer
        if not s in struct:
            continue
        queue = struct[s].copy()
        wakedChild[s] = 0
        for military in queue:
            wakedChild[military] = 0
            if military in struct:
                queue.extend(struct[military].copy())
            
    else: #get the f*ck out of your bed
        #        queue.append(military)
        if not s in struct:
            continue
        print(wake(s))
        print(wakedChild)
#todo type 3
#todo type 2
#todo type 1
        
#10
#0 1 1 1 2 2 3 3 5 5
#
"""
10
0 1 1 1 2 2 3 3 5 5
"""
