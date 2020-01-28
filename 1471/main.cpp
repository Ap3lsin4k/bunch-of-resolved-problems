#include <bits/stdc++.h>

using namespace std;


typedef unsigned int ui;
typedef unsigned char byte;
int main()
{
    unsigned short k;
    unsigned char m, n;
    cin>>m>>n;
    m -= '0';
    n -= '0';

    ui a[m][n], dp[m][n]={};

    for(byte i=0; i<m; ++i)
    {
        for(byte j=0; j<n; ++j)
        {
            cin>>a[i][j];
        }
    }

    dp[m-1][0] = a[m-1][0];

    for(byte i=m; i>=0; --i)
    {
        if(i==0)
        {
            dp[i][0] = a[i][0];
        }
        for(byte j =1; j<n; ++j)
        {
            dp[i][j] = dp[i]
        }
    }


    for(ui i=1; i<n+1; ++i)
    {
        s += (a[i]+a[i-1])/2.0;
    }
    cout<<s*b/n;
    return 0;
}
