#include <bits/stdc++.h>

#define in :
using namespace std;

int main()
{
    string qaq;
    cin>>qaq;
    int sum[qaq.size()], res=0;

    // 1 if first character is 'Q', otherwise 0
    sum[0] = int(qaq[0] == 'Q');

    for (int i=1; i<qaq.size(); ++i)
    {
        sum[i]=sum[i-1] + int(qaq[i] == 'Q');
    }

    /*
    KQAQAQQAQQAL
    011223445666
    */

    for (int i=0; i<qaq.size(); ++i)
    {
        /*
        min(1, 6-1)
        min(2, 6-2)
        min(4, 6-4)
        min(6, 6-6)
        */
        if(qaq[i] == 'A')
            res+= sum[i]*(sum[qaq.size()-1]-sum[i]);
    }
    /*
    KQAQAQQAQQAL
    011223445666

    */
    cout<<res;
    return 0;
}
