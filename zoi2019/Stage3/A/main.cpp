#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 20, m=100;
    set<int> a;
    vector<int> arr;// = {, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169}

    for (int i =0; i<n; ++i)
    {

        for (int j=0; j<n-i; ++j)
        {


        int temp = i*i+j*j;
        cout<<temp<<" ";
        arr.push_back(temp);
        }
    }

/*
    for (int i =0; i<m; ++i)
    {
        cout<<arr[i][0]<<" ";
        for (int j=1; j<m; j+=2)
        {
            arr[i].push_back(*(arr[i].end()-1)+j);
        }
    }

    for (int i =0; i<m; ++i)
    {
        for (int j=1; j<m; j+=2)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    /*
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<n-i; ++j)
        {
            a.insert(i*i+j*j);//<<" ";
        }
        cout<<i<<" ";
    }*/
    cout<<"Finish";
    return 0;
}
