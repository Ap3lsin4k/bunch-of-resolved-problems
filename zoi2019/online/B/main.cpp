#include <bits/stdc++.h>


typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void f()
{

}

int main()
{
    /*
    t - number of operation
    res(counter) - how much coins we have to load at the beginning
    all - current(purchaser's) state(money) in the coffee machine
    bank(counter) - how much 5 coin the machine has. Example bank == 3 there are (5c, 5c, 5c)
    */
    ll t, n, res=0, all, bank=0;
    cin>>t;
    while(t--)
    {
        cin>>n; // 5 coin, 10 bill, 50 bill, or 100 bill
        if(n == 5)
        {
            ++bank; // add five coin to the chest
            continue;
        }

        all = n-5;//buy cofee
        all /= 5; // how much 5 coin the bill has, the same as number of 5 coin we have to give or the left


        /*  Example
        all = 5; // need to give 5 coins
        bank = 3 but have only 3
        so we need to load +2 (coins of 5) at the beginning
        */
        if (all-bank > 0)
        {
            all -= bank; // can not compensate all five coins but give those that have;
            bank = 0;  // the same as bank -= bank;  we have just emptied the bank
            res += all;  // load at the beginning
        }
        /*  Example
        all = 4; // need to give 5 coins
        bank = 4  // have four to give
        so we don't need to load anything
        bank -= 4;
        */
        else if (all-bank == 0) // do not need load extra coins at the beginning
        {
            all -= bank; // all = 0
            bank = 0;  // bank -= bank;
        }

        /*  Example
        all = 6; // need to give 4 coins
        bank = 9 has more than need
        so we don't need to load anything and use from the bank only 6 coins
        bank -= 6;
        */
        else if (all-bank < 0) // do not need load extra coins at the beginning
        {
            bank -= all;
            //all = 0
        }
    }
    cout<<res;
    return 0;
}

