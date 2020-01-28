#include <bits/stdc++.h>

using namespace std;

typedef unsigned int ui;

const unsigned int n=6;//number of vertex
static ui current;
static bool arr[n][n]/*{
    {0, 1, 1, 0, 0,0},
    {1, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {1, 1, 1, 0, 0, 1},
    {0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 1, 0},};
*/;
static int visited[n];

void breadthFirstSearch(ui index)
{
    vector<ui> order;
    ui start=0, finish=0;

    for(ui i=0; i<n; ++i)
    {
        visited[i]=-1;
    }
    visited[index] = 0;
    order.push_back(index);
    //while there is not used items in the order
    while(finish >= start)
    {
        current = order[start];
        ++start;
        for(ui i=0; i<n; ++i)
        {
            //can go from current and we wasn't there
            if(arr[current][i] == 1 and visited[i]==-1)
            {

                visited[i] = visited[current]+1;
                //save vertex
                ++finish;
                order.push_back(i);
            }
        }

    }

}

int main()
{
    ui ribs, x, y;
    cin>>ribs;
    for(ui i=0; i<ribs; ++i)
    {
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    }


    breadthFirstSearch(0);
    for(int i=0; i<n; ++i)
    {
        if(visited[i]!= -1)
        {
            cout<<i<<"="<<visited[i]<<endl;
        }
        else
            cout<<i<<"=no"<<endl;
    }
    return 0;
}
