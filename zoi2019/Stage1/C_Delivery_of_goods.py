def func(graph, start, p={}, vis=[]):
    if len(p) == 0: p[start] = 0
    for x in graph[start]:
        if x not in vis and x != start:
            if x not in p.keys() or graph[start][x]+p[start] < p[x]:
                p[x] = graph[start][x]+p[start]
    vis.append(start)
    min_v = 0
    #print(start, p, vis)
    
    for ver in p:
        if ver not in vis:
            if p[ver] < min_v or min_v == 0:        
                min_x = ver
                min_v = p[ver]
    
    if len(vis) < len(graph):
        return func (graph, min_x, p, vis)
    else:
        return p

n, m, k, t = list(map(int, input().split()))

m -= 1
k -= 1
city = [{} for i in range(n)]
for s in range(n):
    ai, aj, p = list(map(int, input().split()))
    ai -= 1
    aj -= 1
    city[ai][aj] = p
    city[aj][ai] = p 
#print(city)
"""
city = [
    {},
    {2:5, 5:2, 6:5}, #1 vertex
    {1:5, 3:2},  # 2 vertex to 1 weight 5, to 3 weihgt 2
    {2:2, 4:10},  # 3 ver
    {3:10, 5:1},  # 4 ver
    {4:1},  # 5 ver
    {1:5},  # 6 ver
    ]
""""""
n m(start) klient t
6 3 5 20
3 2 2
1 2 5
1 5 2
6 1 5
4 3 10
4 5 1
"""
"""
N = [
    {1:7, 2:9, 5:14},  #0 vertex to 1 or 2 or 5
    {0:7, 2:10, 3:15}, #1 vertex to 0 or 2 or 3
    {0:9, 1:10, 3:11, 5:2},
    {1:15, 2:11, 4:6},  # 3 vertex
    {3:6, 5:9},
    {0:14, 2:2, 4:9},  # 5 vertex
    #{1:3, 5:1},  # 6 vertex
]
""""""
N = [
    {1:7, 2:9, 5:14},  #0 vertex to 1 or 2 or 5
    {0:7, 2:10, 3:15}, #1 vertex to 0 or 2 or 3
    {0:9, 1:10, 3:11, 5:2},
    {1:15, 2:11, 4:6},  # 3 vertex
    {3:6, 5:9},
    {0:14, 2:2, 4:9},  # 5 vertex
    #{1:3, 5:1},  # 6 vertex
]
"""
print()
dijkstra = func(city, m)  # map of the shortest ways
result = dijkstra[k] # get a way we need
if result <= t: # if it is still warm
    print("YES", result)
else:
    print("NO", result-t)
#print("YES" if result <= t else "NO"
