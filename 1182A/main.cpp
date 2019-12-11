#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    // if odd print 0 else print n
    cout<< (n%2 ? 0 : (1<<(n/2)));
    return 0;
}
