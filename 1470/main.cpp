#include <bits/stdc++.h>

using namespace std;


typedef unsigned int ui;

int main()
{
    ui b, n;
    long double s=0;
    cin>>b>>n;
    long double a[n+1];
    for(ui i=0; i<n+1; ++i)
    {
        cin>>a[i];
    }


    for(ui i=1; i<n+1; ++i)
    {
        s += (a[i]+a[i-1])/2.0;
    }
    cout<<s*b/n;
    return 0;
}
