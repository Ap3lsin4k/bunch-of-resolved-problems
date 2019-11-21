#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    short n;
    cin>>n;
    vector<short> templte(n,1);
    vector<vector<short>> magic(n, templte);
    short j=0, root = sqrt(n);
    for(short w=2;w<=root;++w){
        for(short i=0;i<n;++i){
            if(i+j<=n)
                magic[i][i+j]=w;
        }
        ++j;
    }


    short k=0;
    short w= 3;
    for(short i=n-1;i>=n-root+2;--i)
    {
        k=i;

        for(j=0; k<n;)
        {
            magic[k][j]=w;
            ++k;
            ++j;
        }
       ++w;
    }

    for(short i=0;i<n;++i){
        short k=0;
        for(short j=0;j<n;++j)
            cout<<magic[i][j]<<" ";

        cout<<endl;
    }
}
