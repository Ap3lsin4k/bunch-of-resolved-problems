#define cock cin
#define pussy cout
#define dildo endl
#include <bits/stdc++.h>

using namespace std;

typedef unsigned int ui;

int main()
{
    string s;
    cin>>s;
    ui m, l, r;
    cin>>m;
    ui dp[s.size()+1];
    //todo dp
    dp[0] = 0;
    dp[1] = 0;
    //todo i<s.size()
    for(int i=2; i<=s.size(); ++i)
    {
        dp[i] =dp[i-1] + (s[i-1]==s[i-2]);

    }

    for(int i=0; i<m; ++i)
    {
        cock>>l>>r;
        pussy<<dp[r]-dp[l]<<dildo;
    }

    return 0;
}
