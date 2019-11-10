#include <bits/stdc++.h>
#include <chrono>

#define ull unsigned long long
#define ll long long

using namespace std;

const int test = 1000;
bool debug = false;
bool debug2 = true;


string f(ull n)
{
	ull number = n;
	
	// canonical number Distribution
	map<ull, unsigned short> canicDistr; // key < 10**12; 0<value<40 
	auto t1 = std::chrono::high_resolution_clock::now();
	auto t2 = std::chrono::high_resolution_clock::now();
	auto t3 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

	bool flag;
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
			flag = true;
		}
		
	}
	
	
	if (number != 1) // n=6, i=3, number = 3
	{
		if(canicDistr.find(number) == canicDistr.end())
			canicDistr[number] = 1;  // 2**1 = 2
		else
			++canicDistr[number];
	}
			
	bool canDistr=true;
	if (debug)
	{
		t2 = std::chrono::high_resolution_clock::now();
		duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
		cout<<"1{"<<duration<<"} - "<<canicDistr.size()<<"\n";

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
				if (debug)
				{
					t3 = std::chrono::high_resolution_clock::now();
					duration = std::chrono::duration_cast<std::chrono::microseconds>( t3 - t2 ).count();
					cout<<"2{"<<duration<<"}\n";

				}				
				return "No\n";
			}
		}
		
	}
	if(debug)
	{t3 = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>( t3 - t2 ).count();
	cout<<"3{"<<duration<<"}\n";
	
	}
	return "Yes\n";
}



//{2028388}
//{1983303}
//{1974248}
//{1960205}
//{1890058}

void foo2(ull n)
{
	if ((n%2)== 1)
	{
	}
	
}

//{2026389}
//{1957172}
//{1949176}
//{1959175}
void foo3(ull n)
{
	if ((n&1))
	{
	}
	
}





int main()
{
	time_t current_time;
	current_time = time(NULL);
	auto t1 = std::chrono::high_resolution_clock::now();
	unsigned __int64 old = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    
	for (ull n=1000000000000; ; ++n)
	{
//		cout<<n<<" "<<f(n);
		
		
		if (!(n%test))
		{
			cout<<n<<" "<<f(n)<<"";
			
			if(debug2)
			{
				auto t2 = std::chrono::high_resolution_clock::now();
				auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
				cout<<"{"<<duration<<"} - "<<n<<"\n";
				t1=t2;
				unsigned __int64 now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	    
				cout<<"100 tests in milliseconds:";
				cout<<(now-old);
				cout<<"\n";
				old = now;
				
			}
		}
		else f(n);
		
	}
}
