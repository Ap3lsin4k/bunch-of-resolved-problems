#include <iostream>

using namespace std;

void Sort(int size,int arr[])
{
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++)
		{
            if (arr[j] > arr[j + 1])
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
	int n,sumasis=0,sumabos=0;
	int tec,kil=0;
	cin>>n;
	bool isParneOdnakove = true;
	int sis[n], bos[n];
	for(int i=0; i<n; i++)
		cin>>sis[i];
	for(int i=0; i<n; i++)
	{
		cin>>bos[i];
	}
	Sort(n,sis);
	Sort(n,bos);
    for(int i=0;i<n;i++)
    {

            if((sumabos+sumasis)%2!=0)
    	{
    		cout<<-1;
			return 1;
    	}
    	sumasis+=sis[i];
    	sumabos+=bos[i];
    	if(sumabos>sumasis)
		{

    		tec=sis[i];
    		sis[i]=bos[n];
    		kil++;
    		bos[n]=sis[i];
    		kil++;
    	}

    	sumasis+=sis[i];
    	sumabos+=bos[i];
    	if(sumasis==sumabos)
    	{
    		cout<<kil;
    		return kil;
    	}
    	else if(sumasis>sumabos)
    	{

    		tec=sis[n-1];
    		sis[n-1]=bos[i+1];
            kil++;
    		bos[n-1]=sis[i+1];
            kil++;

    	}
    	sumasis+=sis[i];
    	sumabos+=bos[i];
    	if(sumasis==sumabos)
    	{
    		cout<<kil;
    		return kil;
    	} else if (sumasis>sumabos)
    	{

    		tec=sis[n-2];
    		sis[n-2]=bos[i+2];
    		kil++;
    		bos[i+2]=sis[n-2];
    		kil++;
    	}
    	sumasis+=sis[i];
    	sumabos+=bos[i];
    	if(sumabos=sumasis)
    	{
    		cout<<kil;
    		return kil;
    	}
    }
}
