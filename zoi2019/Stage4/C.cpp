#include <bits/stdc++.h>
using namespace std;

long long k;

long long s(long long n)
{
    long long res = 0;
    while(n)
    {
        res+=n%10;
        n/=10;
    }
    return res;
}
int main()
{
    cin>>k;
    for(long long i = k; i > 0 && i >= k-1000; --i)
        if(i+s(i)+s(s(i))+s(s(s(i)))==k) return cout<<"YES"<<endl<<i<<endl,0;
    cout<<"NO"<<endl;
    return 0;
}
