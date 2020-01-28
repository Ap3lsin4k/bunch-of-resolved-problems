#include <bits/stdc++.h>

using namespace std;

typedef unsigned short us;

us graph[5001][5001]{}, n;
us visit[5001]{};


bool dfs(us origin, us cur, char numMove)
{
    if(visit[origin] != 1) visit[origin] == 1;

    if(numMove==3){

            //go back to origin and complete the triangle
            if (graph[cur][origin] == 1)
            {
                return true;//YES the triangle exists
            }
    }
        else if(numMove==2 or numMove ==1){
            us whosThatCurLikesHim;
            for (us j=0; j<n; ++j)
            {
                if(graph[cur][j] == 1){ whosThatCurLikesHim=j;
                break;}
            }
            return dfs(origin, whosThatCurLikesHim, numMove+1);
        }
       else
            return false;
    }
}


int main()
{
    us f;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>f;
        graph[i][f-1] = 1;
    }

/*
    for(int i=0; i<n; ++i)
    {
        for(us j=0; j<n; ++j)
        {

             cout<<graph[i][j];

        }cout<<endl;
    }
*/
    for(us i=0; i<n; ++i)
    {
        //at beginning origin equal cur
            if(dfs(i, i, 1)){cout<<"YES"; return 0;}
    }
    cout<<"NO";
    return 0;
}
