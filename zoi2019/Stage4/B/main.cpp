#include <bits/stdc++.h>

using namespace std;

#define byte unsigned char

void wave(vector<vector<char>>& hw, vector<vector<char>>& dp, short l, short c)
{
//    wayarr[l][c];

    //left
    if(hw[l-1][c] != 'X') {
//        wave(hw, l-1, c);
        /*
        l=2, c=2;
        hw:
        20
        35
        dp
        20
        85
        */
  /*      if (dp[l-1][c]!=0)
            dp[l-1][c] = min(dp[l-1][c], dp[l][c]+hw[l-1][c]) // if we already were there
        else
            dp[l-1][c] = dp[l][c]+hw[l-1][c] // if we already were there
   */

    }
}

int main()
{
    short w, h ;

    cin>>w>>h;


  //  wave(highway, wayarr, startX, startY);
    return 0;
}
