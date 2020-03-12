#include <bits/stdc++.h>

using namespace std;

#define ifNotBetween(a, b, c) if(not (a<=b and b<=c))
typedef unsigned short us;

us f(us m, us s)
{
	switch (m)
	{
	case 1:
		cout<<s<<" "<<s;
		return;
	}
	switch (s)
	{
	case 1:
		cout<<pow(10, n-1)<<" "<<pow(10, n-1);
		break;
	case 2:
		cout<<pow(10, n-1)+1<<" "<<2*pow(10, n-1);
		break;
		
	}
}

int main()
{
	unsigned short m, s;
	cin>>m>>s;
	
	bool error=false;
	
	switch (m)
	{
		case 1:
			ifNotBetween(0, s, 9)
			{
				error = true;
			}
			break;
		case 2:
			ifNotbetween(1, s, 2*9)	error = true;
			break;
		case 3:
			ifNotbetween(1, s, 3*9)	error = true;
		default:
			ifNotbetween(1, s, n*9)	error = true;

	}
	if (error)
	{
		cout<<-1<<" "<<-1;
	}
	else
	{
		f(m, s);
	}
}
//resolve all -1
/*
for
+m=1, s=R
+s=1, m=Z
s=2, m=Z
s=3, m=Z
s=4, m=Z
s=5, m=Z
s=6, m=Z
s=7, m=Z
s=8, m=Z
s=9, m=Z

s=10, m=1, m=2, m=3, m=4
s=11, m=1, m=2, m=3, m=4
s=12, m=1, m=2, m=3, m=4
s=13, m=1, m=2, m=3, m=4
s=14, m=1, m=2, m=3, m=4
s=15, m=1, m=2, m=3, m=4
s=16, m=1, m=2, m=3, m=4
s=17, m=1, m=2, m=3, m=4
s=18, m=1, m=2, m=3, m=4
for s>18, m=1, m=2, m=3, m=4
for m>=5, 2<=s<=18
for m>=5, 18<s
*/
//brute force
