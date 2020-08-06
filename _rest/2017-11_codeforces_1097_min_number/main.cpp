#include <iostream>

using namespace std;

int min(int a, int b)
{
    return a<b:a?b
}

int main()
{
    int n;
    cin>>n;
    int a[n], kCufr[n][100000], k=0, minim =0 ;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        while(a[i] != 0)
        {
            kCufr[i][k] = a[i] % 10;
            a[i] /= 10;
            k++;
        }
        minim = kCufr[i][0];
        for(int j=0; j<2-1; j++)
        {
            if(min(kCufr[i][j], kCufra[i][j+1]) != 0)
            {
                 if(min(kCufr[i][j], kCufra[i][j+1]) > minim) minim = min(kCufr[i][j], kCufra[i][j+1]);


            }
        }
        for(int j=0; j<2-1; j++)
        {
            if(kCufr[i] == minim)
            {
                kCufr[i] = -1;
                    break;
            }
        }
        cout<<minim<<endl;
    }


    return 0;
}
