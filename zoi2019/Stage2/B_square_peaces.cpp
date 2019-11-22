#include <bits/stdc++.h>
#define y1 y_1
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int DIM = 1010;
int l,n,x1,y1,x2,y2,kk[DIM*DIM],mx=-1;

//horisontal(left&right) vertical(up&down)
bool pa[2][DIM][DIM];//1-??? 2-?? 3-????? 4-??
int comp[DIM][DIM];
int cc=0;

void df1(int y,int x)
{
    int x1=x;
    for(;y<=l;y++)
    {
        for(x1=x;x1<=l;x1++)
        {
            comp[y][x1]=cc;

            if(pa[0][y][x1+1]==1)
            {
                break;
            }
        }
        if(pa[1][y+1][x1]==1)break;
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
//                pa[0][y1][x1]=1;
				pa[0][y1][x1]=1;
            }
        }
        if(y1==y2)
        {
            for(;x1<x2;x1++)
            {
                pa[1][y1][x1]=1;
			}
        }
    }

	//1-??? 2-?? 3-????? 4-??
    for(int i=0;i<l;i++)
    {

        pa[0][i][0]=1;
        pa[0][i][l]=1;
        pa[1][0][i]=1;
        pa[1][l][i]=1;
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
		
		*/
    }

   for(int y=0;y<l;y++)
    {
        for(int x=0;x<l;x++)
        {
            if(comp[y][x]==0 && pa[0][y][x]==1 && pa[1][y][x]==1)
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
        }
    }

	cout<<mx<<endl;
	//out debug
	for (int i=0; i<l; ++i)
	{
		for(int j=0; j<=l; ++j)
			cout<<pa[0][i][j]<<" ";
		cout<<endl;
	}
	cout<<endl<<endl;
	
	for (int i=0; i<=l; ++i)
	{
		for(int j=0; j<l; ++j)
			cout<<pa[1][i][j]<<" ";
		cout<<endl;
	}

}//todo rename, memory two time faster

//

//
