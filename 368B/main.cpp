#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], l[m], sa[n];  // sum array indexation starts at 1
    set<int> mySet;
    for (int i=0;i<n; ++i)
    {
        cin>>a[i];

    }
    for (int i=0;i<m; ++i)
    {
        cin>>l[i];
    }
    sa[n-1]=1;//last element is always unique
    mySet.insert(a[n-1]);
    for (int i=n-2; i>=0; --i)
    {
        if (mySet.find(a[i]) != mySet.end())
            // is a[i] in set
            sa[i] = sa[i+1];
        else
        {
            //unique didn't find
            sa[i] = sa[i+1]+1;
            mySet.insert(a[i]);
        }
    }

    for (int i=0; i<m;++i)
    {
        cout<<sa[l[i]-1]<<endl;
    }
    return 0;
}
