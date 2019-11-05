#include <bits/stdc++.h>

using namespace std;

int n, m;
/*
void out(vector<string> a)
{
    for (int l=0; l<n; ++l)
    {
    cout<<a[l];
    cout<<endl;
    }
    cout<<endl;

}
*/
void hor(vector<string>& chess, int l, int c)
{
 int i=l, j=c+1;
 //for (; chess[l][j]!='#';)

  for(;j<m;++j)
  {
   if (chess[l][j] == '#') break;

     chess[l][j] ='#';

    }

 j=c-1;


 for(;j>0;--j)
  {
   if (chess[l][j] == '#') break;

     chess[l][j] ='#';

    }

}

void ver(vector<string>& chess, int l, int c)
{
 int i=l+1;
 //for (; chess[l][j]!='#';)

  for(;i<n;++i)
  {
   if (chess[i][c] == '#') break;

     chess[i][c] ='#';

    }

 i=l-1;


 for(;i>0;--i)
  {
   if (chess[i][c] == '#') break;

     chess[i][c] ='#';

    }

}


void mainDiag(vector<string>& chess, int l, int c)
{
    int i = l+1,  j=c+1;
    for(;i<n and j<m;)
    {
        if (chess[i][j] == '#') break;

        chess[i][j] ='#';
        ++i;
        ++j;
    }

    i=l-1;
    j=c-1;

    for(;i>0 and j>0;)
    {
        if (chess[i][j] == '#') break;

        chess[i][j] ='#';
        --i;
        --j;
    }
}

void diag(vector<string>& chess, int l, int c)
{
    int i = l-1,  j=c+1; //up right
    for(;i>0 and j<m;)
    {
        if (chess[i][j] == '#') break;

        chess[i][j] ='#';
        --i;
        ++j;
    }

    //down left
    i=l+1;
    j=c-1;

    for(;i<l and j>0;)
    {
        if (chess[i][j] == '#') break;

        chess[i][j] ='#';
        ++i;
        --j;
    }
}


// todo long lobg
int move(vector<string>&chess)
{
 int queen =0;
 bool flag=false;
 for (int i=0; i<n; ++i)
 {
  for(int cell=0; cell<m; ++cell)
  {
    if (chess[i][cell]=='.')
    {
     chess[i][cell] = '#';
     //fill
     hor(chess, i, cell);
     ver(chess, i, cell);
     mainDiag(chess, i, cell);
     diag(chess, i, cell);


     queen+=move(chess);
        flag= true;
   }
   else
   {

   }
  }

 }
 if (flag)
    return queen;
 else
    return 1;
}


int separator(vector<string>chess)
{
    return move(chess);
}

int destributor(vector<string> chess)
{
 int queen_comb =0;
 for (int i=0; i<n; ++i)
 {
  for(int cell=0; cell<m; ++cell)
  {
   if (chess[i][cell]=='.')
    {
     queen_comb += separator(chess);

    }
  }
 }
 return queen_comb;
}


int main()
{

 cin>>n>>m;
 vector<string> chessMap;
 for (int i=0; i<n; ++i)
 {
  string line;
  for (int j=0; j<m; ++j)
  {
      char dot;
      cin>>dot;
      line+=dot;
  }
  chessMap.push_back(line);
  }

    cout<<destributor(chessMap);
  //cout<<chessMap.size();

 /*for (int i=0; i<n; ++i)
 {
  for(int cell=0; cell<m; ++cell)
  {
   if (chessMap[i][cell]=='.')
   cout<<0;
   else
   cout<<1;
  }
  cout<<endl;
 }*/
 return 0;
}
