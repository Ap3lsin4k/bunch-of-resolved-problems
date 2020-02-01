#include <bits/stdc++.h>

using namespace std;

typedef unsigned short us;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;

void f(ull n)
{
    set<char> numbers;
    ull i=1, myNum;
    for(;i<18446744;++i)
    {
        myNum = i*n;

        while(myNum>0)
        {
            numbers.insert(myNum%10);
            myNum /= 10;
            if(numbers.size()==10)
                break;
        }

        if(numbers.size()==10) break;
    }
    if (i==18446744)
        cout<<"INSOMNIA\n";
    else    cout<<n*i<<"\n";
}


int main()
{
    ios::sync_with_stdio(false);
    ull t, n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        f(n);
    }
    //cout<<ULONG_LONG_MAX/n<<endl;





    return 0;
}

//todo INSOMNIA
//optimise break
