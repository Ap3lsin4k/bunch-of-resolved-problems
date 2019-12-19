#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin>>n;
    unsigned int a[n];
    for(int i=0;i<n; ++i)
    {
        cin>>a[i];
    }
    int a=INT_MAX;
    unsigned int index, minNum=INT_MAX;
    for(int i=1; i<=4; ++i)
    {
        minNum=INT_MAX;
        for(int j=0; j<n; ++j)
        {
            if (a[j]<minNum)
            {
                minNum = a[j];
                index = j;
            }
        }

        cout<<minNum<<" "<<index+1<<"\n";
        a[index] = INT_MAX; //infinity
    }
    return 0;
}
