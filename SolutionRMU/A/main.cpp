#include <bits/stdc++.h>

using namespace std;

typedef unsigned short us;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;

void f()
{

}


int main()
{
    ios::sync_with_stdio(false);
    ull n, m,t;

    cin>>n>>m>>t;

    //f
    ull nm=n+m, i=2, f=2*(n+m)-4*(1*1), prevF = 2*(n+m)-4*(1*1);
    do{
        prevF = f;
        f=(nm-i)*i;
        i+=2;
    } while(f<=t);
    cout<<i/2-2<<" =? "<<(nm+sqrt(nm*nm-4*t))/4<<" "<<(nm-sqrt(nm*nm-4*t))/4<<" "<<sqrt(nm*nm-4*t);


    return 0;
}
/*
 1 2
 2 4
 3 6
 * */
/*
firstly for res=1
2(n+m)-4
for res = 2
2*2*(n+m)-4(2*2)
for res = 3
2(n+m)-4*(3*3)

//todo 2(n+m) to const
 * */
/*
#include <iostream>

using namespace std;

int main()
{
    long long int n,m,t,i=0,s=0;
    cin>>n>>m>>t;
    s=(2*(n+m)-4);
    while (t>=s){
        i++;
        n-=2; m-=2;
        s+=(2*(n+m)-4);
    }
    cout<<i;
    return 0;
}

 * */
