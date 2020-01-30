#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	unsigned int t, n, x;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		vector<char> s;
		for (unsigned int i=0; i<n; ++i)
		{
			char temporary;
			cin>>temporary;
			temporary -= '0';
			s.push_back(temporary);			
		}
		if (!(s.size()&1))
		{
			//even
			
		}
	}
}

/*
find potential
make it work for potential == 0
print 0, or inf, or 1 if x==0

make skip for potential =0, by &1

if x>0 and potential>0 or x<0 and potential<0:
calculate num of prefixes


Initial 
-1 0 1 0 1
potential 1
next
0 1 2 1 0


Skip:
So, calculate how many x > balance
if potential ==1
or if (x-balance)%potential==0

*/


