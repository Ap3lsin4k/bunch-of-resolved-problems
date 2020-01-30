#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int main()
{
	ui n;
	cin>>n;
	ui L[n+2], R[n+2];
	bool b[n+2]; 
	for(ui i=1; i<=n+1; ++i)
	{
		cin>>L[i]>>R[i];
	}
	
//	sort(s.begin(), s.end(), comp)
	for(ui i=0; i<=n; ++i)
	{
//		cout<<s[i].l<<" "<<s[i].r<<'\n';

	}
	ui i, j;
	for(i=1; i<=n; ++i)
	{
		for (j=i+1; j<=n+1; ++j)
		{
			if(((L[j]>=L[i]) and (L[j]<=R[i]))
			or ((R[j]>=L[i]) and (R[j]<=R[i]))
			or ((L[i]>=L[j]) and (L[i]<=R[j]))
			or ((R[i]>=L[j]) and (R[i]<=R[j]))
			)
			{
				b[i] = true;
				b[j] = true;
			}
			else if(i>1 and j>2)
			{
				goto m1;
			}
		}
	}
	m1:
		if(b[i]==false)
		{
			cout<<i;
		}
		else
			cout<<j;

}

//todo sort with key l
/*
BUG
3
1 2
1 3
3 4
*/
