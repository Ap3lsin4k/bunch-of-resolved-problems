#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    if (N<=6) {cout<<0; return 0;}
    else if (N<=28) {cout<<1; return 0;}
    else if (N<=496) {cout<<2; return 0;}
    else if (N<=8128) {cout<<3; return 0;}
    else cout<<4;
    /*
    else{
    int x=2;
     for ( int i = 100; i <N; i++ )
        {
            int sumai=1;
            for(int d=2; d<=i/2 && sumai<i;d++){
                if (  i % d == 0) sumai+=d;    //x+=i;
            }
            if (sumai==i) x++;
        }
        cout<<x;
    }
    */
    return 0;
}
