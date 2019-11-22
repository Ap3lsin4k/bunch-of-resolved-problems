#include <bits/stdc++.h>


typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void f()
{

}

int main()
{
    ull a, b, n, m, ans1, ans2, mina, minb, maxa, maxb;
    cin>>a>>b>>n>>m;
    //for a=2, b=3
    //0<n,m<=1000
    //for n==m;
 //   if (b>a)
 //       swap(a, b), swap(n, m);
    //a is always less(equal to b)


    /*

    min:2*1 + (n-2)*a-1
        2 jumps 1
        and (n-2) jumps by a
        -1 = bias
    `
    if n = 1 jump
        mina = 0 = -1a +1
        maxa = 1
    if n = 2
        mina = 1 = 0a + 1
        maxa = 3
    if n = 3
        mina = 3
        maxa = 5
    if n = 4
        mina = 5
        maxa = 7
    if n == 5
        (n-2) compensate edges
        (n-2)*a + 1 = a*n - 2a +1
        mina = 7
        max a = 9 = n*a-1               // not for all cases (n-2)*a+3 = na -2a +3 =
        -2a+3 = -1
    */
    if (n == 1)
    {
        mina = 1;
    }
    else
        mina = (n-2)*a + 1;
    maxa = n*a-1;  //(n-2)*a+3

    /*
    min:
        2*1 + (n-2)*b-1
        2 jumps 1
        and (n-2) jumps by a
        -1 = bias

    n=1 jump
        minb = 0
        maxb = 2
    if n is 2
        minb = 1
        maxb = 5 = n*b-1
    if n is 3
        minb = 4 = (n-2)*b +1 = 1*3 + 1
    if n is 4:
        minb = 7 = (2)*3+1
        maxb = 11 = 4*3-1
    */
    if (m == 1)
        minb = 1;
    else
        minb = (m-2)*b + 1; // n*b -2b +1
    maxb = m*b - 1;


    ans1 = max(mina, minb);
    ans2 = min(maxa, maxb);
    // minA = n-1
    if (ans1>ans2)
    {
        //the lowest number can not be bigger than the biggest
        cout<<0<<" "<<0;
    }
    else{
        cout<<ans1<<" "<<ans2;
    }
    return 0;
}
