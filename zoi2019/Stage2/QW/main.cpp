#include <iostream>

using namespace std;

int main()
{
    long long  a,n;
    cin>>n;
    a=n/102;
    n=n-(a*102);

    a=a+(n/23);
    n= n-((n/23)*23);

    a=a+(n/10);
    n=n-(n/10)*10;

    a=a+(n/5);
    n=n-(n/5)*5;

    a=a+(n/1);
    n=n-(n/1);
    cout<<a;
    return 0;
}
