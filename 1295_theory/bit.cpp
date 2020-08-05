#include<iostream>
using namespace std;
int main()
{
	//mult x by 2**k 
	unsigned long long x=2;
	unsigned short k;
	cin>>x>>k;
	unsigned long long res=x<<k;
	cout<<res;
}
