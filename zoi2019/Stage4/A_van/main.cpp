#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int resul(int a, int b)
{
    vector<int> vec_a;
    vector<int> vec_b;
    while(a!=0) {
        int x;
        x=a%10;
        vec_a.push_back(x);
        a/=10;
    }
    while(b!=0) {
        int x;
        x=b%10;
        vec_b.push_back(x);
        b/=10;
    }
    bool f=false;
    int ia=0;
    while(!f) {
        if(vec_a[ia]!=0)
            break;
        else
            ia++;
    }
    int ib=0;
    while(!f) {
        if(vec_b[ib]!=0)
            break;
        else
            ib++;
    }
    int a1=0;
    int s=1;
    for(int i=vec_a.size()-1 ; i>=ia; i--) {
        a1+=s*vec_a[i];
        s*=10;
    }
    int b1=0;
    int s2=1;
    for(int i=vec_b.size()-1 ; i>=ib; i--)
    {
        b1+=s2*vec_b[i];
        s2*=10;
    }
    int ab=a1+b1;
    vector<int> common;
    while(ab!=0)
    {
        int x;
        x=ab%10;
        common.push_back(x);
        ab/=10;
    }
    int iab=0;
    while(!f)
    {
        if(common[iab]!=0)
            break;
        else
            iab++;
    }
    int ab1=0;
    int s3=1;
    for(int i=common.size()-1 ; i>=iab; i--)
    {
        ab1+=s3*common[i];
        s3*=10;
    }
    return ab1;
}
int main()
{
    int n; cin>>n;
    int a, b;;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        cin>>b;
            cout<<resul(a,b)<<"\n";

    }
    return 0;
}
