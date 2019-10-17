
# p - словник поточної відстані до відвіданих вершин
def dijkstra(graph, start, p={}, v=()):
    if len(p) == 0: p[start] = 0
    for x in graph[start]: # for each vertex we can get from current
        if x not in v and x != start: # if we didn't visited it
# якщо ми там були 
            if x not in p.keys() or graph[start][x]+p[start] <p[x]:
                p[x] = grpah[start][x] +p[start]
    v.append(start)
    min_v = 0
    for x in p:
        if p[x]<min_v or min_v == 0 and x not in u:
            min_x = x
            min_v = p[x]
    if len(v)<len(graph) and min_x:
        return dijkstra(graph, min_x, p, v)
    else:
        return p
myGraph = (
    { 1:7, 2:9, 5: 14}, # from 0 vertex may get 1, 2, 5 vertexes, cost of first vertex is 7, to second cost is 9...
    {0:7, 2:10, 3:15},  # vertex 1
    {0:9, 1:10, 3:11, 5:2}, # vertex 2
    {1:15, 2:11, 4:6},
    {3:6, 5:9},
    {0:14, 2:2, 4:9}
)

print(dijkstra
