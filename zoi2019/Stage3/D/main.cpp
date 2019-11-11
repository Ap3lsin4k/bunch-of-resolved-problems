#include <bits/stdc++.h>

using namespace std;


     int n,m;
 vector<string> arr;



void hor()
{

    bool X = (arr[0][0]=='X');
    char winner ='X';
    int length = 0, maxl=0;
    for (int i=0; i<n; ++i)
    {
       // X = (arr[0][0]=='X');
        length = 0;
        for (int j=0; j<m; ++j)
        {
            if (X)
            {
                if (arr[i][j] == 'X'){
                 ++length;
                }
                //....XO...
                else{ // O is longer
                  X=false;

                  length =1;
                }
              if(length > maxl)
              {
                maxl=length;
                winner = arr[i][j];
              }
            }
            else
            {
                if (arr[i][j] == 'O'){
                    ++length;
                }
                else{
                    X= true;
                  length =1;
                }
                if(length > maxl){
                    maxl=length;
                    winner = arr[i][j];
                  }
            }
        }
    }
    cout<<"hor"<<maxl<<" "<<winner<<"\n";

}


void ver()
{
      bool X = (arr[0][0]=='X');
    char winner ='X';
    int length = 0, maxl=0;
     //vertical
    for (int j=0; j<n; ++j)
    {
        length = 0;
        //
        for (int i=0; i<m; ++i)
        {
            if (X)
            {
                if (arr[i][j] == 'X'){
                 ++length;
                }
                //....XO...
                else{ // O is longer
                  X=false;

                  length =1;
                }
              if(length > maxl)
              {
                maxl=length;
                winner = arr[i][j];
              }
            }
            else
            {
                if (arr[i][j] == 'O'){
                    ++length;
                }
                else{
                    X= true;
                  length =1;
                }
                if(length > maxl){
                    maxl=length;
                    winner = arr[i][j];
                  }
            }
        }
    }
    cout<<maxl<<" "<<winner<<"\n";
}


void maindig()
{
        bool X = (arr[0][0]=='X');
    char winner ='X';
    int length = 0, maxl=0;
    for (int i=0; i<n; ++i)
    {
       // X = (arr[0][0]=='X');
        length = 0;
        for (int j=0; j<m; ++j)
        {
            if (X)
            {
                if (arr[i][j] == 'X'){
                 ++length;
                }
                //....XO...
                else{ // O is longer
                  X=false;

                  length =1;
                }
              if(length > maxl)
              {
                maxl=length;
                winner = arr[i][j];
              }
            }
            else
            {
                if (arr[i][j] == 'O'){
                    ++length;
                }
                else{
                    X= true;
                  length =1;
                }
                if(length > maxl){
                    maxl=length;
                    winner = arr[i][j];
                  }
            }
        }
    }
    cout<<"hor"<<maxl<<" "<<winner;
}

int main()
{

     cin>>n>>m;
        for (int i=0; i<n; ++i)
        {
            string str;
            cin>>str;
            arr.push_back(str);
        }

    //horisontaly
    hor();

    //verticaly
    ver();


    //maindig();
}
