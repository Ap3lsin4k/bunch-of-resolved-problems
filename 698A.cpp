#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
    for(int i=0; i<n; ++i)
	{
		cin>>a[i];
	}
	
	/*
	prev = 0  - rest on yesterday 
	prev = 1 - contest
	prev = 2 - gym
	*/
	int previous = 0, rest=0;
    for(int i=0; i<n; ++i)
	{
	
		switch (a[i])
		{
			case 3:
				if (previous != 0) previous = previous^1^2;
				break;
			case const int(previous):
			case 0:
				++rest;	previous = 0;
				break;
			default:
				previous = a[i];
		}
			
		
			//contest is carried out
		
			// i did contest or gym on yesterday, don't let two day in a row
			
				//don't do contest(gym), and take a day off
	
				
			
				//cases prev = 0, or 1 or 2				
		
		
	}

	cout<<rest<<endl;

}

/*'
100
3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1 0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 0 3 3 3 3 3 1 0 2 1 3 3 0 2 3 3
s g s s s g s c s g g s g s s s s s s c g g s

c g c g c g c 0 c g 0 c g c g c g c g 0 g 0 g c

31
3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1  num = 31, ans 8
1 2 1 2 1 2 1-1 1 2-2 1 2 1 2 1 2 1 2 1 2-2 2 1 2 1 2-2 2 1-1, true ans =5
										prev

-01 2 1 2 1 2 1-1 2 1 2 1 2 1 2 1 2  analyse, ans 2
0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 num = 18, ans =2;

35
0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 num = 35, ans = 9
-01 2-2 1 2 
0 3 3 3 3 3 1 num = 7, ans = 1
0 2 1 3 3 ans = 1
0 2 3 3  ans = 1

5+5
last = 6

*/

/*
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
    for(int i=0; i<n; ++i)
	{
		cin>>a[i];
	}
	
	/*
	prev = 0  - rest on yesterday 
	prev = 1 - contest
	prev = 2 - gym
	*/
	short previous = 0, rest=0;
	bool superpos=false;
    for(int i=0; i<n; ++i)
	{
		if(a[i] == 3)
		{
			//if I did gym do constest, if I did contest do the gym. Anyway do something and don't rest
			if (previous != 0) previous = previous^1^2;
			//1^1^2 = 0^2 = 2; 2^1^2=3^2 = 1  P.S. binary
			//
			// else if previous is 0
 			//if rest on yesterday
			// superpos = true; // the same as previous = 0 because on the next iteration we can chose whatever we want
		}
		else
		{
			//contest is carried out
			if(previous == a[i] or a[i] == 0) // i did contest or gym on yesterday, don't let two day in a row
			{
				//don't do contest(gym), and take a day off
	
				++rest;
				previous = 0;
			}
			else
			{
				//cases prev = 0, or 1 or 2				
				previous = a[i];
			}
		}
		
	}

	cout<<rest<<endl;

}

/*'
100
3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1 0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 0 3 3 3 3 3 1 0 2 1 3 3 0 2 3 3
s g s s s g s c s g g s g s s s s s s c g g s

c g c g c g c 0 c g 0 c g c g c g c g 0 g 0 g c

31
3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1  num = 31, ans 8
1 2 1 2 1 2 1-1 1 2-2 1 2 1 2 1 2 1 2 1 2-2 2 1 2 1 2-2 2 1-1, true ans =5
										prev

-01 2 1 2 1 2 1-1 2 1 2 1 2 1 2 1 2  analyse, ans 2
0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 num = 18, ans =2;

35
0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 num = 35, ans = 9
-01 2-2 1 2 
0 3 3 3 3 3 1 num = 7, ans = 1
0 2 1 3 3 ans = 1
0 2 3 3  ans = 1

5+5
last = 6

*/

*/

