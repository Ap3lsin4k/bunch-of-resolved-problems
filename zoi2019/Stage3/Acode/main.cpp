#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

void for0(ull n)
{
    long double root = sqrt(n);
    // double is int/double === double is double
    if (root == n/root)
        cout<<"Yes";
    else
        cout<<"No";

}


bool isPerfectSquare(ull x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}


int main()
{
      ull x = 152415789666209426002111556165263283035677489;
  if (isPerfectSquare(x))
    cout << "Yes";
  else
    cout << "No";

    ull n;
    cin>>n;
    switch(n%4)
    {
    case 0:
        // is sqrt
        break;


    case 1:
        //always "Yes"
        break;

    case 2:
        //"Yes" if n-2 mod 8 is 0 else "No"
        break;

    case 3:
        //always No
        break;
    }

    return 0;
}
