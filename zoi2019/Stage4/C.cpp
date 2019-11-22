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
void f(long long k)
{
	
    for(long long i = k; i >= 1 && i >= k-1000; --i)
    {
    	cout<<i<<" ";
		if(i+s(i)+s(s(i))+s(s(s(i)))==k) 
		{
			
			cout<<"YES"<<endl<<i<<endl;
			return;
    	}
    }
	cout<<"NO"<<endl;
	
}
int main()
{
    cin>>k;
    //for(int i=0; i<100; ++i) 
    {
    	f(k);cout<<"\n-\n";
	}
    return 0;
}
