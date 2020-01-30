#include <bits/stdc++.h>
using namespace std;

typedef unsigned short us;
int main()
{
	us n;
	us m;
	cin>>n>>m;
	vector<unsigned short> a;
//	a.reserve(n);
	for(us i=0; i<m; ++i)
	{
		us temp;
		cin>>temp;
		a.push_back(temp);
		}	
	sort(a.begin(), a.end());
	
	us i=0, sum=0;
	for(; i<m and sum<n; ++i)
	{
		sum += a[i];
	}
	if(sum<=n) cout<<i;
	else 
	cout<<i-1;
}
