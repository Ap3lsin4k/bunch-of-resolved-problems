#include <iostream>

using namespace std;
/*
max number of
f(10) = n(4+6)
f(12) = n(4+4+4)
n(14) = n(4+4+6)
n(16) = 4+4+4+4
f(18) = 4+4+4+6

9*2 = 4+4+4+6
9*3 = n(9+9+9) = (4+4+4+6+9)
*/
int f(int n)
{
    if(n<0) return -1;
    switch(n)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 7:
        return -1;
    case 4:
    case 6:
    case 9:
        return 1;//4=4

    }

    int recur_res = f(n-4);

    if (recur_res == -1)
        return -1;

    return recur_res+1;
}

int main()
{
    int q, n;
    cin>>q;
    while (q--)
    {
        cin>>n;
        cout<<f(n)<<endl;

    }

    /*
    12

    2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
    4 6 8 9 10 12 14 15
    4 6 (4+4) 9 (4+6)
    */
    return 0;
}
