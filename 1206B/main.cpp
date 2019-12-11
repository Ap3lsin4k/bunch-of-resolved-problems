#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, res=0, zeros=0, minus1=0;
    cin>>n;
    long long a[n];
    for(long long i=0; i<n; ++i)
    {
        cin>>a[i];

        if (abs(a[i])>1)
            res += abs(a[i])-1;
        if(a[i]== 0)
            zeros++;
        else if(a[i] > 0) {}
        else if (a[i]<0)
            ++minus1;
        else {
            res += abs(a[i])-1;
            if(a[i]<0) {
                ++minus1;
            }
        }
        // if abs > 1; res += abs-1

    }


    // (-1)(-1)(-1)(-1)
    if(minus1%2 == 0) // mult equal one
    {
         // 11100

        // 0 change to 1, next to -1
        res += zeros;


    }
    else // mult equal -1
    {
        if (zeros>0)
        {
            res += zeros;
        }
        if(zeros==0)
        {
            res+=2;
        }
    }

    cout<<res;
    return 0;
}
