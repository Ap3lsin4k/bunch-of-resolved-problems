#include <bits/stdc++.h>

typedef unsigned int ui;
using namespace std;

int main()
{
    ui n, sum=0;
    cin>>n;
    bool a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        sum += a[i];
    }


    ui dp[n+1][n+1];

    ui result=0;
    for(ui i=0; i<n; ++i)
    {
        /*
        if(i==0)
        {
            if (a[0]) // we change it to zero
                dp[0][0] = sum -1;
            else
                dp[0][0] = sum +1;//one more item
        }
        if(i==1)
        {
            if (a[0]) // we change it to zero
                dp[1][0] = sum -1;
            else
                dp[1][0] = sum +1;//one more item
        }*/
        //dp[i][i] = sum +(a[i] ? -1 : 1)
        if (a[i]) // we change it to zero
            dp[i][i] = sum -1;
        else
            dp[i][i] = sum +1;//one more item

        for(ui j=i+1; j<n; ++j)
        {

            if(a[j]) //equal to 1 we change to zero
                dp[i][j] = dp[i][j-1] - 1;
            else
                dp[i][j] = dp[i][j-1] + 1;//zero to one
            result = max(result, dp[i][j]);

        }
        result = max(result, dp[i][i]);

    }
    for(ui i=0; i<n; ++i)
    {
        for(ui j=i; j<n; ++j)
        {
            if (dp[i][j]>result)
            {
                result = dp[i][j];
            }
        }
    }
    cout<<result;
    return 0;
}
//iftrue
a+1
false_type
