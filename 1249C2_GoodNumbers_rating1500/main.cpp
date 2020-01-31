#include <bits/stdc++.h>

using namespace std;

typedef unsigned short us;

typedef unsigned int ui;
typedef unsigned long long ull;
int main()
{
    //if n<= 10**4 < 3**10
    //then m = 2*(3**10)+2*(3**9)+2*(3**8)+2*(3**7)... 2*(3**0) = 3**11-1 = 177146
    unsigned short q;
    ull n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        ull m=n, sum=0;
        bool letThePartyBegin=false, zeroWasFound=false;
        ui ranks=0;
        while(m>0)
        {

            if (m%3==2)
            {
                //if party never started
                if(!letThePartyBegin) letThePartyBegin = true;
                else{
                    //clear
                    sum = 0;
                    zeroWasFound = false;
                }
            }
            if(m%3 == 1 and letThePartyBegin and zeroWasFound)
            {
                sum += ull(pow(3, ranks));
            }

            if(m%3 == 0 and letThePartyBegin)
            {
                //only first zero counts
                if(not zeroWasFound)
                {
                    sum = ull(pow(3, ranks));
                    zeroWasFound = true;

                }
            }


            ranks++;
            m/=3;

        }
        if(sum != 0)
            cout<<sum<<endl;
        else if (not letThePartyBegin)
        {
            //n is the number
            cout<<n<<endl;
        }
        else{
            cout<<ull(pow(3, ranks))<<endl;
        }

    }
    return 0;
}

/*
71 minutes
 150 rating
 4 times send
 */
