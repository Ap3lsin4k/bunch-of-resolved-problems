#include <bits/stdc++.h>

using namespace std;
typedef unsigned short us;
typedef unsigned int ui;


/*
excuses
let x1<x3
 * */

bool doesIntersect(us x2, us x3)
{
    return x3<=x2;
}


bool doesIntersect(us x1, us x2, us x3, us x4)
{
    if(x1<x3)
        return doesIntersect(x2, x3);
    else
        return doesIntersect(x4, x1);
}

struct Player
{
    us x1, y1, x2, y2;
};

int main()
{
    us n, m;
    ui q;
    unsigned long res=0;
    cin>>n>>m>>q;
    Player ps[q];

    for(ui i=0; i<q; ++i) {
        cin>>ps[i].x1>>ps[i].y1>>ps[i].x2>>ps[i].y2;
    }

    for(ui i=0; i<q; ++i)
    {
        for(ui j=i+1; j<q; ++j){
            //if x1<x3 another words if second player after first
            if (doesIntersect(ps[i].x1, ps[i].x2, ps[j].x1, ps[j].x2)
            and doesIntersect(ps[i].y1, ps[i].y2, ps[j].y1, ps[j].y2))
                ++res;

        }
    }

    cout<<res;

    return 0;
}
/*
+перевірку чи два відрізки перетинаються по Х
+check if intersect Y
+check if lines intersect
for each player check if it intersect others
print number of intersection
*/
/*
✸ ✹
✹
✶ ✶ ✶ ✷
✶ ✶ ✸ ✸
✷ ✷ ✸ ✸
✷ ✸ ✸ ✹

 * */
