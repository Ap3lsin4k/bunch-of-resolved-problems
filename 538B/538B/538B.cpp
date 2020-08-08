//http://codeforces.com/problemset/problem/538/B
#include <iostream>
#include <list>
using namespace std;
/*
let n <100
just print k -  the minimum amount of numbers in the representation of n
*/
typedef unsigned int ui;
typedef unsigned short us;
unsigned int quasibinary[]{ 11, 10, 1 };

#define printarr(quasibinary) {for (auto x : quasibinary) cout << x << " ";}
#define resetarr(arr, size) {for (int i = 0; i < size; ++i) arr[i] = -1;}

//Breadth-first search

int main()
{
	printarr(quasibinary);
	static const unsigned int n = 9; // < 10^6
	list<ui> queue;
	us depth = 1;
	
	//initialize all elements with 0
	short dp[n + 1]{};

	queue.push_back(n);
	queue.push_back(NULL);

	ui time = 0;

	for (; not queue.empty(); queue.pop_front())
	{
		// new level
		if (*queue.begin() == NULL)
		{
			++depth;
			// to endicate the ends of the level
			queue.push_back(NULL);
			continue;
		}

		ui minued = *queue.begin();

		for (auto subtrahend : quasibinary)
		{
			++time;
			if (subtrahend > minued)
			{
				cout << subtrahend << " " << minued << " - skip\n";
				continue;
			}
			else if (subtrahend == minued)
			{
				cout << subtrahend << " " << minued << " - quit\n";

				cout << "res:" << depth << "\ttime:"<<time;
				return 0;
			}
			else 
			{
				ui difference = minued - subtrahend;

				// dynamic programming condition. since we use BFS, we never change an item in the dp array twice
				if (dp[difference] == 0)
				{
					// i.e. minued(aka current n) is equal to `difference` + sum of the quasibinary numbers (in the ammount of `depth`)
					dp[difference] = depth;

					// `difference` aka next `n`
					queue.push_back(difference);
				}
				else
					cout << difference << " - is already with depth: " << depth << "\n";
			}
		}
	
		
	}

}

/*
optimize: use queue instead of list
descending order for quasibinary, e.g. {1, 10, 11} to {11, 10, 1}
*/
/*
queue size for each iteration
*/