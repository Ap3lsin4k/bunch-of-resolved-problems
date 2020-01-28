#include <bits/stdc++.h>

using namespace std;
typedef unsigned short us;
typedef unsigned int ui;


/*
excuses
let x1<x3
 * */


int main()
{
    ui n;
    cin>>n;
    set<char> temporarySetChar;
    vector<set<char>> s(n, temporarySetChar);
    string tempString;
    for(ui i=0; i<n; ++i)
    {
        cin>>tempString;
        for(ui j=0; j<tempString.size(); ++j)
        {
            s[i].insert(tempString[j]);
        }

    }


    return 0;
}
/*
Make shorter input from 10**6 to 27
for each set
{
    if current password in currentParentSset:
        union parent and daughter;
        change daughter to parent
        next set
}


*/
