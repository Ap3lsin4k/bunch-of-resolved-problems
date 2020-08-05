#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;

#define takeMod %= 1000;


ull twoToThePowerOf(ull n)
{
    ull l=1;
    ui i;
    for (i=0; i<=n-30; i+= 30)
    {
      l = l<<30;
      cout<<l<<"\n";
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
        return 1;
    }
    if(a==2)
    {
        //3
        return 1+2*getRemainder(a-1);
    }
    if(a==3)
    {
        //8
        return 2+2*getRemainder(a-1);
    }
    if(a==4)
    {
        //19 = 3+16 = 19
        return 3+2*getRemainder(a-1);
    }
    if(a==5)
    {
        //2*19+5 = 19+(8+3) + 8+16
        return 5+2*getRemainder(a-1);
    }
}

int main()
{
  ui n, c;
  ull i=1;
  i=i<<30;
  cout<<i<<'\n';
  i=i<<30;
  cout<<i<<'\n';
  cin>>n>>c;
  
    if(c>n)
    {
        cout<<twoToThePowerOf(n)<<"\n";
    }
    if(n==c)
    {
       cout<<twoToThePowerOf(n)<<"\n";               
    }
    else if(n-c == 1)
    {
        cout<<twoToThePowerOf(n)-1<<"\n";        
    }
    else if(n-c == 2)
    {
        cout<<twoToThePowerOf(n)-3;
    }
    else if(n-c == 3)
    {
        cout<<twoToThePowerOf(n)-8;
    }
    else if (n-c == 4)
    {
        cout<<twoToThePowerOf(n)-8-3-3-3;
    }
}
