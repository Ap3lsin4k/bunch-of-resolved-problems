#include <bits/stdc++.h>

using namespace std;

void wave(vector<vector<short>>& dp, short l, short c)
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

    short w, h;
    cin>>w>>h;

    vector<vector<short>> highway;
    vector<vector<short>> wayarr;

    vector<short> tmplt(h, 0);
    for(short i=0; i<w; ++i)
    {
        string car;
        cin>>car;
        highway.push_back(tmplt);


        wayarr.push_back(tmplt);
        for (int j=0; j<h; ++j)
        {

            wayarr[i][j] = car[j] - '0';
            highway[i][j] = car[j] - '0';
        }

    }

    /*
    XXXX
    X  X
    X  X

    =>

    XXXX
    X  X
    X  X
    XXXX
    */
short startX=0, startY=0;
    for(short i=0; i<w; ++i){
        for(short j=0; j<h; ++j){
            if(highway[i][j] == 'S'){
                startX = i;
                startY = j;
                break;
            }
        }
    }
    highway[startX][startY] = '0';
  //  highway[startX][startY] = '0';
//    wayarr[startX][startY] = '0'-'0';
    for(short i=0; i<w; ++i){
        for(short j=0; j<h; ++j){
            cout<<wayarr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
