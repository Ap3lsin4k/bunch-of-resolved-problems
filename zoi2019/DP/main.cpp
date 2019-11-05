#include <bits/stdc++.h>

using namespace std;


int f(int n)
{
   // cout<<n<<endl;
    if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;

	return f(n-1)+f(n-2)+f(n-3);
}

/*
int fdp(int n)
{
//    if(ans[n]==0)
    {
        ans[n] = f(n);
    }
    return ans[n];
}
*/

//int ans[1000000];

int fib(int n)
{
    if(n==0) return 1;
    if (n==1) return 1;

    return fib(n-1)+fib(n-2);
}

long long fibdp(vector<long long>& ans, long long n)
{

    if (ans[n] == 0)
        ans[n] = fibdp(ans, n-1)+fibdp(ans, n-2);

    return ans[n];
}

int main()
{
    long long n;
    cin>>n;
    //cout<<fib(n);
    vector<unsigned long long > a(n+1,0);
    a[0]=1;
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for(unsigned long long  i=4;i<=n;++i)
    {
        a[i]=(a[i-3]+a[i-2]+a[i-1]) % 10007;

    }

    cout<<a[n];
    return 0;
}












/*
*/
