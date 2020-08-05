#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int n;
unsigned int tree[10000];

void build(bool a[], ui v, ui tl, ui tr)
{
    if(tl == tr)
        tree[v] = a[tl];
    else {
        unsigned int tm = (tl+tr)/2; // 23 / 2 => 12
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        tree[v] = tree[v*2] + tree[v*2+1];
    }
}

/*
tl, tr - end of subtree
l, r - order
*/
ui sum(ui v, ui tl, ui tr, ui l, ui r)
{
    if(l==tl and r==tr)
    {
        return tree[v];
    }
    else{
        ui tm = (tl+tr)/2;
        //tl definitely <= l, r < tr;
        //whereas l <= r
        if(r <= tm) {
            // go left
            return sum(v*2, tl, tm, l, r); // [l, r]
        }
        //r goes right
        if(tm+1 <= l)
        {
            //l goes right and
            return sum(v*2+1, tm+1, tr, l, r);
        }
        // r goes right, and l goes left
        //[l; r1], [l1, r]
        return sum(v*2, tl, tm, l, tm)
            + sum(v*2+1, tm+1, tr,tm+1 ,r);

    }
}
ui sum(ui l, ui r)
{
    return sum(1, 0, n-1, 1, 5);
}
void update(ui v, ui tl, ui tr, ui pos, ui new_val)
{
    if (tl == tr)
    {
        //todo update a parent and a grandparent... of the leaf
        tree[v] = new_val%2;
    }
    else {
        ui tm = (tl+tr) / 2;
        if(pos <= tm)  // go left
            update(v*2, tl, tm, pos, new_val);
        else // go right
            update(v*2+1, tm+1, tr, pos, new_val);
        //update parent from new children
        tree[v] = tree[v*2] + tree[v*2+1];
    }

}
void update(ui pos, ui new_val)
{
    update(1, 0, n-1,pos, new_val);
}
int main()
{

    cin>>n;
    bool a[n];
    ui number, Q;
    for(int i=0; i<n; ++i)
    {
        cin>>number;
        a[i] = number % 2; // if 1, the number is odd, 0 if even
    }
    //build tree, indexing starts with 1, and length of tree is leaves

    cin>>Q;
    while(Q--)
    {
        ui type, l, r, x, y;
        cin>>type;
        switch (type)
        {
        case 0://replace: a[x] = y
            cin>>x>>y;
            update(x-1, y);
            break;
        case 1:// count even
            cin>>l>>r;
            cout<<n - sum(l-1, r-1)<<endl; // number
            break;

        case 2:  // count odd
            cin>>l>>r;
            cout<<sum(l-1, r-1)<<endl;
            break;
        }
    }

    return 0;
}
