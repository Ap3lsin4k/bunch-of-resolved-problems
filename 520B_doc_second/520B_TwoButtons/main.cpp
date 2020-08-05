// 520B_TwoButtons.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

typedef unsigned short us;

us m, queue[2 * 10000 - 1]{}, visited[2*10000-1];

//if visited[v] == 4, it means we need to press button 4 times to get M


void pushback(us vertex, us depth, us &finish)
{
    if (not visited[vertex])
    {
        visited[vertex] = depth + 1;
        queue[++finish] = vertex;
    }
}

us bfs(us initVertex, us depth)
{

    //current - vertex
    us start = 0, finish = 0, current;
    queue[start] = initVertex;
    visited[queue[start]] = depth;

    while (start <= finish)
    {
        if (queue[start] == m) {
            //print number of pressing  }
            return visited[queue[start]] - 1;
        }
        if (queue[start] != 1)
        {
            pushback(queue[start] -1, visited[queue[start]], finish);
        }
        if (queue[start] < m)
        {
            pushback(queue[start] * 2, visited[queue[start]], finish);
        }
        ++start;
    }
}

int main()
{
    us n;
    cin >> n >> m;
    cout<<bfs(n, 1);
}

/*
TODO
+make input
+create function
+create global order
+create "visited vertex"
Do breadth-first search
Add exception like if number bigger than M, don't use the red button
Optimisation: track max number in the order(maxNumInOrder). Don't add number to the order if this is bigger than maxNumInOrder
Test with N=4, M=4, out = 8

In future additional way to optimise
Us order as boolean
Make order not global
if M element is in queue don't wait and print it in push back
*/

/*
BLUE button - subtract one
RED button - multiple by two
*/
