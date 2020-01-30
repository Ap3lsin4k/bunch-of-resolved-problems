#include <bits/stdc++.h>
#include <stdio.h>
#include <time.h>

using namespace std;


/*
excuses
let x1<x3
 * */

int main()
{
    unsigned long long n=123123123;
	bool f;

    cin>>n;
	clock_t start = clock();
    n%2;
     clock_t _end = clock()-start;
    double cpu_time_used = ((double) (_end - start)) / CLOCKS_PER_SEC;
    cout<<cpu_time_used;
	return 0;
}
/*
10
abbaba
absdasdas
asdjasd
asdasklk
klkl
wk
wew
ewew
klk
kkl
*/
/*
Make shorter input from 10**6 to 27
for each set
{
	if current password in currentParentSset:
		union parent and daughter;
		change daughter to parent
		next set
}


*/
//if sets intersects
