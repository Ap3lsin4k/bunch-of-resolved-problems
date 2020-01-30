#include <iostream>
#include <vector>
using namespace std;

typedef unsigned int ui;
int main()
{
	ios::sync_with_stdio(false);

	unsigned int t, n, x;
	cin >> t;
	//t = 1;
	while (t--)
	{
		cin >> n >> x;
		vector<char> s;
		for (unsigned int i = 0; i < n; ++i)
		{
			char temporary;
			cin >> temporary;
			temporary -= '0';
			s.push_back(temporary);
		}
		if (!(s.size() & 1))
		{
			//even
			ui potential = 0;
			for (auto it : s)
			{
				if (it)
					--potential;
				else
					potential++;
			}
			if (potential == 0)
			{
				//print either -1 or 0
				if (x != 0)
				{
					//todo optimise don't need the second loop
					ui cntFinitMatches = 0;
					ui balance = 0;

					for (auto it : s)
					{
						if (it)
							--balance;
						else
							balance++;

						if (x == balance)
							++cntFinitMatches;
						
					}
					//TODO boolean 
					if (cntFinitMatches > 0)
					{
						//inf
						cout << -1<<"\n";
					}
					else
					{
						//no matching
						cout << 0 << "\n";
					}

				}else{
				//x=0, potential ==0
					cout << 0 << "\n";
				}
				return 0;
			}
			else {
				ui cntFinitMatches = 0;
				ui balance = 0;


				for (auto it : s)
				{
					if (it)
						--balance;
					else
						balance++;

					if (x == balance)
						++cntFinitMatches;
				}
				cout << -1<<"\n";
			}
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

