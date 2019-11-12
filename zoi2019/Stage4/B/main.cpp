#include <bits/stdc++.h>

using namespace std;

#define byte unsigned char

void wave(vector<vector<char>>& hw, vector<vector<char>>& dp, short l, short c)
{
//    wayarr[l][c];

    //left
    if(hw[l-1][c] != 'X') {
        wave(hw, l-1, c);
        /*
        l=2, c=2;
        hw:
        20
        35
        dp
        20
        85
        */
        if (dp[l-1][c]!=0)
            dp[l-1][c] = min(dp[l-1][c], dp[l][c]+hw[l-1][c]) // if we already were there
        else
            dp[l-1][c] = dp[l][c]+hw[l-1][c] // if we already were there
    }
}

int main()
{
    short w, h ;

    cin>>w>>h;

    vector<char> templt(h+2, 'X');
    vector<vector<char>> highway;
    vector<vector<char>> wayarr;
    /*
    for (short i=0; i<=h; ++i)
    {
        highway[0].push_back('X');
        wayarr[0].push_back('X');
    }
*/
    highway.push_back(templt);
    wayarr.push_back(templt);

    vector<char> X;
    X.push_back('X');

    for(short i=1; i<=w; ++i)
    {
        highway.push_back(X);
        for(short j=1; j<=h; ++j)
        {
            char car;
            cin>>car;
            highway[i].push_back(car);
        }
        highway[i].push_back('X');
    }

    highway.push_back(templt);
    wayarr.push_back(templt);
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



    short startX=1, startY=1;
    for(short i=1; i<=w; ++i){
        for(short j=1; j<=h; ++j)
        {
            if(highway[i][j] == 'S')
            {
                startX = i;
                startY = j;
                break;
            }
        }
    }
    highway[startX][startY] = '0';
    wayarr[startX][startY] = 0;
        for(short i=0; i<=w+1; ++i){

        for(short j=0; j<=h+1; ++j){
            cout<<highway[i][j];
        }
        cout<<"\n";
    }
    wave(highway, wayarr, startX, startY);
    return 0;
}
