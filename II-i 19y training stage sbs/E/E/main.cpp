#include <bits/stdc++.h>

using namespace std;


typedef unsigned int ui;

//let the string exist
int main()
{
    //todo entering
    ui n, q;
    ui l, r, indexOfShowUp;
    string* lines;
    string S;
    map<string, vector<int>> m;
    // Example of key of map "abc"
    cin>>n;
    lines = new string[n];
    for(int i=1; i<=n; ++i)
    {
        cin>>S;
        m[S].push_back(i);
    }

    cin>>q;
    for(auto myPair : m)
    {
        S = myPair.first;
        for(ui l=1; l<=n; ++l)
        {
            for(ui r=l; r<=n; ++r)
            {

                //binary search
                //keys is number of such string in range(begining to this index) with the value
                //value is index in global order
                if(m[S].empty())
                {
                    cout<<"0\n";
                    continue;
                }
                vector<int> indexes= m[S];
                ui pivot, pivotEnd;
                bool flagLNull=true, flagRNull=true;
                //find pivot that indexes == l
                //todo find;

                for(ui j=0; j<indexes.size(); ++j)
                {
                    //l=7
                    //i=2
                    //indexes= 1, 3, 7, 11
                    if(indexes[j] == l)
                    {
                        pivot = j; // 4 - 2
                        flagLNull = false;
                        break;
                    }
                    //l = 4
                    //1 3 7 11
                    //indexes[2] = 7
                    if(indexes[j] > l)
                    {
                        pivot = j;//length -pivot = 4 - 2 = 2
                        flagLNull = false;
                        break;
                    }
                }

                for(int j=indexes.size()-1; j>=0; --j)
                {
                    //r=10
                    //1 3 5 7 10 11
                    //i=4
                    if(indexes[j]==r)
                    {
                        pivotEnd=j+1;
                        flagRNull = false;
                        break;
                    }
                    /*
                     r=9
                     1 3 5 7 10 11
                     i=4
        */
                    if(indexes[j] < r)
                    {
                        pivotEnd = j+1; // size of the vector
                        flagRNull = false;
                        break;
                    }
                }

                cout<<"l, r:"<<l<<" "<<r<<" ";
                if(flagLNull or flagRNull)
                {
                    // r набагато менший за першу появу рядка
                    cout<<"0\n";
                }
                else
                    cout<<pivotEnd-pivot<<"\n";
            }
        }



    }

    return 0;
}
/*
5
abc
def
abc
def
abc
100
5 5 def
9
abc
def
abc
def
sad
sad
abc
sad
def
100
*/
