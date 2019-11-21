#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int resul(int a, int b)
{
    vector<int> a_elements;
    vector<int> b_elements;
    while(a!=0)
    {
        int x;
        x=a%10;
        a_elements.push_back(x);
        a=a/10;
    }
    while(b!=0)
    {
        int x;
        x=b%10;
        b_elements.push_back(x);
        b=b/10;
    }
    bool f=false;
    int ia=0;
    while(f==false)
    {
        if(a_elements[ia]!=0)
            break;
        else
            ia++;
    }
    int ib=0;
    while(f==false)
    {
        if(b_elements[ib]!=0)
            break;
        else
            ib++;
    }
    int a1=0;
    int s=1;
    for(int i=a_elements.size()-1 ; i>=ia; i--)
    {
        a1+=s*a_elements[i];
        s*=10;
    }
    int b1=0;
    int s2=1;
    for(int i=b_elements.size()-1 ; i>=ib; i--)
    {
        b1+=s2*b_elements[i];
        s2*=10;
    }
    int ab=a1+b1;
    vector<int> ab_elements;
    while(ab!=0)
    {
        int x;
        x=ab%10;
        ab_elements.push_back(x);
        ab=ab/10;
    }
    int iab=0;
    while(f==false)
    {
        if(ab_elements[iab]!=0)
            break;
        else
            iab++;
    }
    int ab1=0;
    int s3=1;
    for(int i=ab_elements.size()-1 ; i>=iab; i--)
    {
        ab1+=s3*ab_elements[i];
        s3*=10;
    }
    return ab1;
}
int main()
{
    int n; cin>>n;
    int el[n][2];
    for(int i=0; i<n; i++)
    {
        cin>>el[i][0];
        cin>>el[i][1];
    }
    for(int i=0; i<n; i++)
    {
        cout<<resul(el[i][0],el[i][1])<<"\n";
    }
    return 0;
}
