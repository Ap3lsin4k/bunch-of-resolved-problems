#include <bits/stdc++.h>

using namespace std;


int main()
{
    unsigned int  n;
    unsigned int mas[100002];
    while(true)
    {
        cin>>n;
        if(n==0)
            break;

        mas[1]=1;
        for(unsigned int i=2;i<=n;++i)
        {
            mas[i]=mas[i-1]+4*(i-1);
        }
        cout<<mas[n];
    }

    return 0;
}
/*

100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000 100000

1201 1000000000 1000000000 1000000000 1000000000 10000000000 1000000000 10000000000 10000000000
 100000000000 10000000000901 23920392039 203920392039 2398239283
1000000000 1000000000 1000000000 1000000000 10000000000 1000000000 10000000000 10000000000
 100000000000 10000000000901 23920392039 203920392039 2398239283
1000000000 1000000000 1000000000 1000000000 10000000000 1000000000 10000000000 10000000000
 100000000000 10000000000901 23920392039 203920392039 2398239283
1000000000 1000000000 1000000000 1000000000 10000000000 1000000000 10000000000 10000000000
 100000000000 10000000000901 23920392039 203920392039 2398239283
1000000000 1000000000 1000000000 1000000000 10000000000 1000000000 10000000000 10000000000
 100000000000 10000000000901 23920392039 203920392039 2398239283
1000000000 1000000000 1000000000 1000000000 10000000000 1000000000 10000000000 10000000000
 100000000000 10000000000901 23920392039 203920392039 2398239283

*/
