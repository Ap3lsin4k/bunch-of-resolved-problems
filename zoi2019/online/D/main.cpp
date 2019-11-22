#include <bits/stdc++.h>


typedef long long ll;
typedef unsigned long long ull;
using namespace std;

//map<ull, ull> saved;

ull multf(ull n)
{
    ull saved;
    /*
    if (n <= 9)
        return n
    else
    {
    //1234
    remember[1234] = 4*mult(123) = 4*3*mult(12)
        remember[n] = n/10 * mult(n)
    }
    **/

    if (n <= 9)
    {
        return n;
    }
        ull dil = n%10;
        if (dil == 0)
            saved = 0;
        else  saved =(n%10)*multf(n/10);


    return saved; // mult of n
//        cout<<"found\n";
        // found

    /*
    while(n)
    {
        dil = n%10;// remember dill
        if(dil == 0) return 0; //0*number == 0
        mult *= dil;
        n /= 10;
    }
    return mult;*/
}

int myout(ull n)
{
    for (int i=0; i<=n; ++i)
    {
        cout<<"For i :"<<i<<"\t*\t"<<multf(i)<<"\t=\t"<<i*multf(i)<<"\n";
    }
    return 0;
}

int main()
{
    ull n, a, b, supermult, mult, previous, Cmax, res=0;
    cin>>a>>b;
    //cout<<multf(999999999999999999)<<" ";
//    Cmax = pow(9, int(log10(b)));
    //for (n=1; n <= int(a/Cmax) and n > 0;n--)
    for (n=int(sqrt(a)); n<=b/2; ++n)
    {
        mult = multf(n);
        supermult = n*mult;
        //if(mult!=0)
        //    cout<<n<<" "<<mult<<" "<<supermult<<"\n";
        if(supermult <= b){
            if(supermult >= a){
                ++res;
            }

        }
    }
    //myout(10000);
    //cin>>a>>b;
    /*n=b;
    mult = multf(n);
    supermult = n*mult;
    if(supermult <= b)
    {
        //b is to big
        n =b;
    }

    Cmax = pow(9, log10(10));
    for (; n >= int(a/Cmax);n--)
    {
        mult = multf(n);
        supermult = n*mult;
        /*
            to_low = true;
            previous = n;
            n -= 10;
            //*/
       /*
        if(supermult <= b)
        {

            if(supermult >= a)
            {
                ++res;
            }

        }

    }*//*
    for (int i=0; i<pow(10, 8); ++i)
    {
        if (i%500000 == 0) cout<<i<<"\t";
    }*/


    cout<<res;
    return 0;
}
