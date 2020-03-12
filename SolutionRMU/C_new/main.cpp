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
    ui n,a,b,c;
    cin>>n>>a>>b>>c;
    ui arr[n+2]{};

    for(ui i=1;i<=n;++i)
    {
        ui mx1=0;
        for(ui j=1;j<=n;++j)
        {
            ui mx2=0;
            ui d=0,e=0,f=0;
            if(i==j)
            {
                mx2+=i*c;
            }
            else
            {
                d=j*a;
                if(j-i>0)
                    e=(j-i)*a+i*c;
                else {
                    e=UINT_MAX;
                }
                if(i-j>0)
                    f=(i-j)*b+i*c;
                else {
                    f=UINT_MAX;
                }
                if(d>e)d=e;

                if(d>f)

                    mx2+=f;
                else
                    mx2+=d;
            }
            if(mx2>mx1)
              mx1=mx2;
          }
        arr[i]+=mx1;
    }

  ui mn=UINT_MAX;
    for(ui i=1;i<=n;++i)
    {
       if(arr[i]<mn)
        mn=arr[i];
    }
    cout<<mn;
    return 0;
}
/*
 * #include <bits/stdc++.h>

using namespace std;

typedef unsigned short us;
typedef unsigned ui ui;
typedef long long ll;
typedef unsigned long long ull;

void f()
{

}


ui main()
{
    ios::sync_with_stdio(false);
    ui n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<ui> arr(n+1);

    for(ui i=1;i<=n;++i)
    {
        ui mx1=0;
        for(ui j=1;j<=n;++j)
        {
            ui mx2=0;
            ui d=0,e=0,f=0;
            if(i==j)
            {
                mx2+=i*c;
            }else
            {
                d=j*a;
                if(j-i>0)
                e=(j-i)*a+i*c;
                else {
                    e=UINT_MAX;
                }
                if(i-j>0)
                f=(i-j)*b+i*c;
                else {
                    f=UINT_MAX;
                }
                if(d>e)d=e;

                if(d>f)

                    mx2+=f;
                else
                    mx2+=d;
            }
            if(mx2>mx1)
              mx1=mx2;
          }
        arr[i]+=mx1;
    }

  ui mn=UINT_MAX;
    for(ui i=1;i<=n;++i)
    {
       if(arr[i]<mn)
        mn=arr[i];
    }
    cout<<mn;
    return 0;
}
*/
/*
And we can calc f[i][0/1] by f[i−1][0/1],through the following equations:

f[i][0]=min(f[i−1][0],f[i−1][1])+ai
f[i][1]=min(f[i−1][0]+c,f[i−1][1])+bi,because if we walk to the i−1-th floor,we must wait for elevator,but if we go to i−1-th floor by elevator,we don't need to wait again.
 * */
/*
#include <iostream>
#include<stdio.h>
using namespace std;
long long a[1000],b[1000],n,c,p,t;
bool dog(int num)
{
    long long peo,i,j,tot,floor,t1;
    for(i=1;i<=n;i++)
        if (b[i]>=num) break;
    floor=i;
    peo=num-b[i-1];
    tot=0;
    for(i=floor;i>=1;)
    {
        tot=tot+(peo%c==0?peo/c:peo/c+1)*2*p*i;
        if (tot>t) return false;
        t1=peo%c;
        if (t1==0)
        {
            i=i-1;
            peo=a[i];
            continue;
        }
        for(j=i-1;j>=1;j--)
            if (a[j]+t1>=c) break;
            else
                t1+=a[j];
        peo=a[j]-(c-t1);
        i=j;
    }
    if (tot<=t) return true;
    return false;
}
int main()
{
    long long i,left,right,ans,mid;
    while(scanf("%lld%lld%lld%lld",&n,&c,&p,&t)!=EOF)
    {
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        b[0]=0;
        a[0]=0;
        for(i=1;i<=n;i++)
            b[i]=b[i-1]+a[i];
        left=0;
        right=b[n];
        ans=0;
        while(left<=right)
        {
            mid=(left+right)/2;
            if (dog(mid))
            {
                ans=mid;
                left=mid+1;
            }
            else
                right=mid-1;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
*/
/*\
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  vector<int> mas(n+1);
  int min=INT_MAX;
  for(int i=1;i<=n;++i)
    {
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
              else {
                  e=INT_MAX;
                }
              if(i-j>0)
              f=(i-j)*b+i*c;
              else {
                  f=INT_MAX;
                }
              if(d>e)
                {
                  d=e;
                }
                if(d>f)
                  {
                    mx2+=f;
                  }else {
                      mx2+=d;
                    }

            }
          if(mx2>mx1)
            mx1=mx2;
        }
      mas[i]+=mx1;
    }

  for(int i=1;i<=n;++i)
    {
      if(mas[i]<min)
        min=mas[i];
    }
  cout<<min;
}



https://codeforces.com/blog/entry/70990
https://codeforces.com/blog/entry/19195

*/
