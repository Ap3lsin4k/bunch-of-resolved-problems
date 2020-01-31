#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;


//#define module 1000000007
#define module 1000000000
#define takeMod %= module;



ull twoToThePowerOf(ll n)
{
    ull l=1;
    long long i;
    for (i=0; i<=n-30; i+= 30)
    {
      l = l<<30;
      //cout<<l<<"\n";
      l takeMod

    }

    l <<= n%30;
    return l;
}

ull getRemainder(ull a)
{
    if(a==0)
    {
        return 0;
    }
    if(a==1)
    {
        //n=2
        return 1;
    }
    if(a==2)
    {//n=3
        //3
        return 1+2*getRemainder(a-1);
    }
    if(a==3)
    {//n=4
        //8
        return 2+2*getRemainder(a-1);
    }
    if(a==4)
    {//n=5
        //19 = 3+16 = 19
        return 3+2*getRemainder(a-1);
    }
    if(a==5)
    {//n=6
        //32
        //2*19+5 = 19+(8+3) + 8+16
        return 5+2*getRemainder(a-1);
    }
    if(a==6)
    {//n=7
        //
        //2*43+8 = 43 +43 +8
        return 10+2*getRemainder(a-1);
    }
    return 0;
}

int main()
{
  ui n, c;
  ull i=1;
  i=i<<30;
  ///cout<<i<<'\n';
  i=i<<30;
  //cout<<i<<'\n';
  cin>>n>>c;
  ll f[n+8];

    if(c>=n)
    {
        cout<<twoToThePowerOf(ll(n))<<"\n";
    }
    /*else if(n-c == 1)
    {
        cout<<twoToThePowerOf(n)-getRemainder(n-c)<<"\n";
    }
    else if(n-c == 2)
    {
        cout<<twoToThePowerOf(n)-getRemainder(n-c);
    }
    else if(n-c == 3)
    {
        cout<<twoToThePowerOf(n)-getRemainder(n-c);
    }
    else if (n-c == 4)
    {
        cout<<twoToThePowerOf(n)-getRemainder(n-c);
    }*/
    else{
        f[0] = 1;
        for (ui i = 1; i <= c; i++)
            f[i] = (f[i - 1] * 2) % module;
        f[c + 1] = f[c] * 2 - 1;
        for (ui i = c + 2; i <= n; i++)
        {
            f[i] = f[i - 1] * 2 - f[i - c - 2];
          //  cout << f[i - 1] << " " << f[i - c - 1] << "   " << i - 1 << " " << i - c - 1 << endl;
            if (f[i] < 0)
                f[i] += module;
            else
                f[i] %= module;
        }
        cout << f[n] << endl;
    }
}
