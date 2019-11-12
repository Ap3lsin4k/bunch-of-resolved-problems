#include <iostream>

using namespace std;

int main()
{
    for(unsigned long long i=0; i<1000000000000000000;++i)
    {
        if(i%100000000 == 0)
        cout << i << endl;

    }
    cout << "Hello world!" << endl;
    return 0;
}
