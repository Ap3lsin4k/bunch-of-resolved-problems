#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int MaxN = 30;
//	   left	 right  up    down
int Dx[]{0,		0,	-1,		1};//napryamok ruhu
int Dy[]{-1, 1, 0, 0};//

int A[31][31], Mn[31][31], N, M, res;

void GetMin(int *si, int *sj)
{

    int i, j, min;
    min = INT_MAX; *si=0; *sj=0;
	//cout<<"min="<<min<<" ";
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
        {
            if(Mn[i][j] > 0 && Mn[i][j]<min)
            {
                *si=i;
                *sj=j;
                min=Mn[i][j];
            }
            //cout<<"min="<<min<<" ";
        }
}
void Solve()
{
    int i, j, k, si, sj, ni, nj;
    Mn[0][0]=A[0][0];
    for(j=0; j<N*M-1; j++)
    {    
    	for(int i=0; i<N; i++)
    	{
        	for(int j=0; j<M; j++)
        	{
        	    cout<<Mn[i][j]<<'\t';
        	}
        	cout<<'\n';
    	}
        GetMin(&si, &sj);
        cout<<si<<" "<<sj<<endl;
         for(k=0; k<4; k++)
        {
        	//ruhayemsa vidnosno Mn[si][sj] v rizni storonu
            ni = si+Dx[k];
            nj = sj+Dy[k];
            //chu mozhem vuytu za mezhi masuvy and chu mu
            if(ni<N && ni>=0 && nj<M && nj>=0 && Mn[ni][nj]>=0)
                if(Mn[ni][nj]==0 || Mn[si][sj]+A[ni][nj]<Mn[ni][nj])
                    Mn[ni][nj]=Mn[si][sj]+A[ni][nj];
        }
        Mn[si][sj]=-Mn[si][sj];
    }
    res = abs(Mn[N-1][M-1]);
}

int main()
{
    cin>>N>>M;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cin>>A[i][j];
            Mn[i][j]=0;
        }
    }
    Solve();
    cout<<res;
    return 0;
}

