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
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> mas(n+3);
    for(int ci=1;ci<=n;++ci)
    {
        max(ci+)
        int mx1=0;
        for(int j=1;j<=n;++j)
        {
            int mx2=0;
            int d=0,e=0,f=0;
            if(i==j)
            {
                mx2+=i*c;
            }else
            {
                d=j*a;
                if(j-i>0)
                    e=(j-i)*a+i*c;
                else
                    e=INT_MAX;

                if(d>e) d=e;

                if(i-j>0)
                    f=(i-j)*b+i*c;
                else
                    f=INT_MAX;



                if(d>f)
                    mx2+=f;
                else
                    mx2+=d;


            }
            if(mx2>mx1)
              mx1=mx2;
          }
        mas[i]+=mx1;
    }
    int mn=INT_MAX;

    for(int i=1;i<=n;++i)
      {
        if(mas[i]<mn)
          mn=mas[i];
      }
    cout<<mn;
    return 0;
}


