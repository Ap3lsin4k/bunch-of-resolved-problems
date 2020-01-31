#include <iostream>

using namespace std;

typedef unsigned short us;

typedef unsigned int ui;

int main()
{
    //if n<= 10**4 < 3**10
    //then m = 2*(3**10)+2*(3**9)+2*(3**8)+2*(3**7)... 2*(3**0) = 3**11-1 = 177146
    unsigned short q, n;
    ui dp[20000]{};
    cin>>q;
    while(q--)
    {
        cin>>n;
        bool found=false;
        ui m=n;
        if(dp[n] != 0)
            cout<<dp[n]<<endl;
        else
        {

            for(ui ternaryM=m; not found;++m)
            {
                ternaryM=m;
                while(not found)
                {
                    if(ternaryM%3 == 2)
                        break;
                   ternaryM /= 3;
                   if (ternaryM == 0)
                   {
                       found = true;
                       break;
                   }
                }
            }
            m--;
            for (us i=n; i<=m; ++i)
            {
                if(dp[i]== 0)
                {
                    dp[i] = m;
                }
                else break;
            }
            cout<<m<<endl;

        }
    }
    return 0;
}

/*
 n=1252 = 1+9+37+2*243+729
3to the power of
0   1   2   3   4   5   6
1   0   1   1   0   2   1

 * */
/*
27 min for 1300 rating
first try


21 min to optimise with dp array
two tries
 */
