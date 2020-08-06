#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double i, res;
	
	for(i=0; i<20;i++)
	{
		res =	(0.1*log(i+1))	/	(cos(i)+2);
	
		cout <<"i:"<<i  <<"  res: "<< res << "\n";
	}
	
	cin.get();
	return 0;
}

