#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y,x,y1,y2;
    cin>>y;
    y1=y%10;
    y2=y/10;
    x=y2/y1;
    if(y1!=0)
        cout<<x<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
