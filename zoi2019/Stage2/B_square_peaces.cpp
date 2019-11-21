#include <bits/stdc++.h>
#define y1 y_1
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int DIM = 1010;
int l,n,x1,y1,x2,y2,kk[DIM*DIM],mx=-1;
bool pa[5][DIM][DIM];//1-??? 2-?? 3-????? 4-??
int comp[DIM][DIM];
int cc=0;
//void dfs(unsigned short x,unsigned short y)
//{
//    swap(x,y);
//    //1-??? 2-?? 3-????? 4-??
//    if(x<0 || x>l || y<0 || y>l)return;
//        if(comp[x][y]!=0)return;
//    comp[x][y]=cc;
//    if(comp[x+1][y]==0 && pa[1][x][y]==0)
//        dfs(x+1,y);
//    if(x>0 && comp[x-1][y]==0 && pa[2][x][y]==0)
//        dfs(x-1,y);
//    if(y>0 && comp[x][y-1]==0 && pa[3][x][y]==0)
//        dfs(x,y-1);
//    if(comp[x][y+1]==0 && pa[4][x][y]==0)
//        dfs(x,y+1);
//}
void df1(int y,int x)
{
    int x1=x;
    for(;y<=l;y++)
    {
        for(x1=x;x1<=l;x1++)
        {
            comp[y][x1]=cc;

            if(pa[1][y][x1]==1)
            {
                break;
            }
        }
        if(pa[4][y][x1]==1)break;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
//freopen("b3in.txt","r",stdin);
    cin>>l>>n;


    for(int i=1;i<=n;i++)
    {
    	//2 0 2 5
        cin>>x1>>y1>>x2>>y2;
        if(x1>x2)swap(x1,x2);
        if(y1>y2)swap(y1,y2);
        //x1++,x2++,y1++,y2++;
		//1 - справа 2 - зліва, 3 зверху, 4 низ
        if(x1==x2)// 2 == 2
        {
        	//for y1 in [0, 1, 2, 3, 4]
            for(;y1<y2;y1++)
            {
            	//
                pa[1][y1][x1-1]=1;
				pa[2][y1][x1]=1;
            }
        }
        if(y1==y2)
        {
            for(;x1<x2;x1++)
            {
                pa[3][y1][x1]=1;
				pa[4][y1-1][x1]=1;
			}
        }
    }

/*
fill side like so
0000
0000
0000
0000

1111
1001
1001
1111

*/	//1-??? 2-?? 3-????? 4-??
    for(int i=0;i<l;i++)
    {

        pa[2][i][0]=1;
        pa[3][0][i]=1;
        pa[1][i][l-1]=1;
        pa[4][l-1][i]=1;
    }
/*for(int i=1;i<=4;i++)
    {
        cout<<pa[0][1][i]<<endl;
    }*/
    //cout<<mp.count({{0,0},{1,0}})<<endl;
   for(int y=0;y<l;y++)
    {
        for(int x=0;x<l;x++)
        {
            //1-??? 2-?? 3-????? 4-??
            /*if(comp[x][y]==0 && cc==1){cc++;dfs(x,y);}
            if(comp[x+1][y]==0 && pa[x][y][1]==1){cc++;
                dfs(x+1,y);}
            if(x>0 && comp[x-1][y]==0 && pa[x][y][2]==1){cc++;
                dfs(x-1,y);}
            if(y>0 && comp[x][y-1]==0 && pa[x][y][3]==1){cc++;
                dfs(x,y-1);}
            if(comp[x][y+1]==0 && pa[x][y][4]==1){cc++;
                dfs(x,y+1);}*/
            if(comp[y][x]==0 && pa[2][y][x]==1 && pa[3][y][x]==1)
            {
                cc++;  // кожну ділянку мітимо цифрою
                df1(y,x); // помітити ділянку доки не стіна
            }

        }
    }
    for(int y=0;y<l;y++)
    {
        for(int x=0;x<l;x++)
        {
            kk[comp[y][x]]++;
            mx=max(mx,kk[comp[y][x]]);
            //cout<<comp[y][x]<<" ";
        }
//cout<<endl;
    }

cout<<mx<<endl;
	for (int k=0; k<5; ++k)
	{
		for (int i=0,j=0; i<l; ++i)
		{
			for(int j=0; j<l; ++j)
				cout<<pa[k][i][j]<<" ";
			cout<<endl;
		}
		cout<<endl<<endl;
	}

}//todo rename, memory two time faster

//

//
