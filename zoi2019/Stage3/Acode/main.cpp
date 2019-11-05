#include <iostream>

using namespace std;

#define unsigned long long ull

void for0(ull n)
{
    unsigned long double root = sqrt(n);
    // double is int/double === double is double
    if (root == n/root)
        cout<<"Yes";
    else
        cout<<"No";

}
int main()
{
    ull n;
    cin>>n;
    switch(n%4)
    {
    case 0:

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
