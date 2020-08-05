#include <iostream>

using namespace std;

typedef unsigned int ui;

ui tree[4*100000];
void build(ui a[], ui v, ui tl, ui tr)
{
    if(tl==tr)
    {
        tree[v] = a[tl];
    }
    else
    {
        ui tm = (tl+tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        tree[v] = tree[v*2]+tree[v*2+1];
    }
}

ui sum(ui v, ui tl, ui tr, ui l, ui r)
{
    // l  and  limit of current order
    if (tl==l and r == tr)
    {
        //limit is like order
        return tree[v];
    }
    ui tm = (l+r)/2;
    if (tr<=tm)
    {
        //go left
        return sum(v*2, tl, tr, l, tm);
    }
    if (tm+1<=tl)
    {
        //go right
        return sum(v*2+1, tl, tr, tm+1, r);
    }
    //one goes left second right
    return sum(v*2, tl, tm, l, tm)
            + sum(v*2+1, tm+1, tr, tm+1, r);
}

void update(ui v, ui tl, ui tr, ui ind, ui y)
{

    if(tl == tr)
    {
        tree[v] = y%2;

    }
    else
    {
        ui tm = (tl+tr)/2;

        if(ind <=tm )
            //go left
            update(v*2, tl, tm, ind, y);
        else if (tm+1 <= ind)
            //go right
            update(v*2+1, tm+1, tr,  ind, y);

        tree[v] = tree[v*2]+tree[v*2+1];
    }

}

int main()
{
    ui n;
    cin>>n;
    ui a[n];

    for(ui i=0; i<n; ++i)
    {
        cin>>a[i];
        a[i] = a[i]%2;

    }

    build(a, 1, 0, n-1);

    ui Q;
    char type;
    cin>>Q;
    while(Q--)
    {

        ui l, r;
        cin>>type;
        switch (type)
        {
        case '0':
            ui x, y;
            cin>>x>>y;
            //change
            update(1, 0, n-1, --x, y);
            break;
        case '1':
            cin>>l>>r;
            cout<< (r-l+1)-sum(1, --l, --r, 0, n-1)<<endl;
            break;
        case '2':
            cin>>l>>r;
            //num odd
            cout<< sum(1, --l, --r, 0, n-1)<<endl;
            break;
        }
    }
    return 0;
}
/*
8
1 0 1 0 0 0 1 0
100
2
*/
