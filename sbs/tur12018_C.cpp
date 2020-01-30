#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

struct Segment{
	public:
	ui l, r, position;
};

//previous and next 
//true if needs swap

bool comp(Segment a, Segment b)
{
	return a.l < b.l;
}

int main()
{
	ui n;
	cin>>n;
	vector<Segment> s;
	for(ui i=0; i<=n; ++i)
	{
		ui l, r;
		cin>>l>>r;
		Segment mySegment;
		mySegment.l = l;
		mySegment.r = r;
		mySegment.position = i+1;
		s.push_back(mySegment);
	}
	
	sort(s.begin(), s.end(), comp)
	;for(ui i=0; i<=n; ++i)
	{
//		cout<<s[i].l<<" "<<s[i].r<<'\n';

	}
	
	bool flag;
	for(ui i=1; i<=n; ++i)
	{
		if(s[i-1].r != s[i].l)
		{
			flag=true;
			cout<<s[i].position;
			return 0;
		}
	}
	if(!flag)
	{
		//delete last segment in sorted, but out index before sorting
		cout<<s[n].position;
	}
}

//todo sort with key l
/*
BUG
3
1 2
1 3
3 4
*/
