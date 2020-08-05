#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], d, series, res=0;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    if(n==1) {cout<<1; return 0;}
    d=a[1]-a[0];
    series = 1; // length of current chain

    for(int i=2; i<n; ++i)
    {
        if(a[i] == a[i-1]+d){
            ++series;
        }
        else{
            if(series>res) res = series;
            d = a[i]-a[i-1];
            series = 1;
        }
    }

    return 0;
}
