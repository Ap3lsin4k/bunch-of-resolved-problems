#include <bits/stdc++.h>
#define printvec(myVec) for(int indexx= 0; indexx<myVec.size(); ++indexx){    cout<<myVec[i]<<" ";} cout<<"\n";

using namespace std;

// Function to convert decimal number to octal
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        cout<<rem<<" ";
        i *= 10;
    }
    return octalNumber;
}


//todo make list
int main()
{

    int number10base; // as symbol
    2cin>>number10base; // input till space ' '

    vector<char> num8thbase;  // each digit is larger than [0 and smaller than 7]

    int remainder = number10base;

    int number8thbase;

    while(remainder>0)
    {
        cout<<(remainder%8)<<" ";
        num8thbase.push_back(remainder%8);
        remainder /= 8;

    }

    //we jave inversed number
    for(int i=num8thbase.size()-1; i>=0; --i)
        cout<<static_cast<int>(num8thbase[i]);

        //1000 = 1750(Oct)
        //INVERSED 0571
    for(int i=0; i<num8thbase.size(); ++i)
    {
        char digit = num8thbase[i];
        if (digit != 0)
        {

            // todo erase
        }
        else{
            //todosucces exit check is there lead zeros
        }
            //258 = 402 but it is inversed
        //
    }
    return 0;
}
