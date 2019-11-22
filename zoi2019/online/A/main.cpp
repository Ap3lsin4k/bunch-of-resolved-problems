#include <bits/stdc++.h>


typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int f(int a, int b)
{
    return a*(b+1);
}

int f1(int n)
{
    int root = sqrt(n), sum=0;
    //3*3 != 15
    sum=2*(root*(root+1)); // 2* (3*4)

    n -= root*root; // if n is a square n = 0;
    //if 1<= n <= 3
    // if 4 <= n <= 6
    if(n-root>0) // false if n is a square
    {
        sum += root*2+1;
        // root < n <= 2*root
        n -= root;
        // 0 < n <= root
    }
    if(n != 0)
        sum += n*2+1;// sum += 0 if n is a square
    return sum;
}

int main()
{
    int n, a, b;
    cin>>n;
    /*
    vector<ull> template;
    vector<vector<ull>> myVector(t, template);
    */
    cout<<f1(n);
/*
    for (int dil=sqrt(n); dil>=1; --dil)
    {
        if(n%dil == 0)
        {
            a = dil;
            b = n/dil;
            break;
        }
    }
    cout<<f(a, b)+f(b, a);
    */
    return 0;
}

/*
for 5
11111
or
111
11

for 101
1111111...1111
or
1111111111
1111111111
...
1111111111
1111111111
1

n-1
*/
