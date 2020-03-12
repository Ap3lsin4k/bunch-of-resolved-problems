#include <bits/stdc++.h>

using namespace std;

char r1, c1, r2, c2;

unsigned short rook()
{
	if(r1==r2 or c1==c2)
		return 1;
	else
		return 2;
}

unsigned short bishop()
{
	//zero if one even even(odd-odd) another even-odd(odd-even)
	if(not(r1&1 xor c1&1))
	{
		if(not(r2&1 xor c2&1))
		{
			if(abs(r2-r1)==abs(c2-c1))
			{
				return 1;
			}
			else return 2;
		}
		else
		{
			return 0;
		}
	}
	else {
		//even-odd
		if(r2&1 xor c2&1)
		{
			if(abs(r2-r1)==abs(c2-c1))
			{
				return 1;
			}
			else return 2;
		}
		else return 0;
	}
	return 0;
}

unsigned short king()
{
	if(r1==r2 or c1==c2)
	{
		return abs(r2-r1)+abs(c2-c1);
	}
	//even-even
	if(not(r1&1 xor c1&1))
	{
		//odd-odd
		if(not(r2&1 xor c2&1))
		{
			if(abs(r2-r1)==abs(c2-c1))
			{	
				return abs(r2-r1);
			}
		}
		
	}
	unsigned short minDiff, maxDiff;
	if (abs(r2-r1)<abs(c2-c1))
	{
		minDiff = abs(r2-r1);
		maxDiff = abs(c2-c1);
	}
	else
	{
		maxDiff = abs(r2-r1);
		minDiff = abs(c2-c1);
	}
	
	return maxDiff;
}

int main()
{
	cin>>r1>>c1>>r2>>c2;
	r1-= '0';
	c1-= '0';
	r2-= '0';
	c2 -= '0';
	
	cout<<rook()<<" "<<bishop()<<" "<<king();
}
/*
test rook
bake bishop
print zero
print one or two
make king

//todo optimise abs

1200
11minutes
*/
