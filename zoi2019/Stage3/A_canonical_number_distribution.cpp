#include <bits/stdc++.h>
#include <chrono>

#define ull unsigned long long
#define ll long long

using namespace std;

string f(ull n)
{
	ull number = n;
	
	// canonical number Distribution
	map<ull, unsigned short> canicDistr; // key < 10**12; 0<value<40 

for (ull i=2; i<=number and i*i<=number; ++i)
{
	
	// integer division
	while (number%i == 0)
	{
		//Example number number = 28, i = 2
		//there is no such key 
		if(canicDistr.find(i) == canicDistr.end())
			canicDistr[i] = 1;  // 2**1 = 2
		else
			++canicDistr[i];
			
		number /= i;  // number = 28/2 = 14; n = number * 2**1
	}
	
}


if (number != 1) // n=6, i=3, number = 3
{
	if(canicDistr.find(number) == canicDistr.end())
		canicDistr[number] = 1;  // 2**1 = 2
	else
		++canicDistr[number];
}
			
	for (pair<ull, unsigned short> prime : canicDistr)
	{
		//if base = 3, 7, 11, 19
		//if(n%test == 0) cout<<prime.first<<"**"<<prime.second<<"  +\n";
		if(prime.first % 4 == 3)
		{
			// if exponent is not odd, n is not sum of the squares. Therefore isn't equal a**2 + b**2	
			if (prime.second % 2 == 1)
			{	
				return "No";
			}
		}
		
	}
	return "Yes";
}


int main()
{	
	short tests;
	cin>>tests;
	
	ull n;
	
	for (short test=0; test<tests; ++test)
	{
		cin>>n;
		cout<<f(n)<<"\n";
	}
}
