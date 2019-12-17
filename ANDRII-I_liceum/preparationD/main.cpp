#include <bits/stdc++.h>

using namespace std;



vector<int> a;
set<vector<int>> allProgression;

vector<int> progressionToBeSavedInSet;

int f(unsigned int i, int diff, int length)
{

}

void recursionBegin(unsigned int i, int diff, int length)
{
    //found
    if(binary_search(a.begin()+i, a.end(), a[i]+diff))
    {
        //if b[0], b[1], b[2]... - arifmetic progression, a[1]=a[i], if b[2] exist and equal b[1]+diff exist
        f(i+1, diff, length);
    }
    else
    {
        //length of progresion is two, it is non-sence

    }
}

int main()
{
    int k;
    cin>>k;
    int d, series, maxlength=1, numberOfArithmeticProgression=0, firstTerm, minDiff=INT_MAX;

    string name="sadkasdkl";
    for(int i=0; i<k; ++i)
    {
        int unsortedArifmeticTerm;
        cin>>unsortedArifmeticTerm;
        a.push_back(unsortedArifmeticTerm);
    }
    sort(a.begin(), a.end());

   // for(vector<int>::iterator it =a.begin(); it!= a.end(); ++it)
    for(int i=1; i<a.size(); ++i)
    {
        int diff=a[i]-a[i-1];
        progressionToBeSavedInSet.pu
        f(i, diff, 2);//length is 2
    }
    cout<<endl;
    //
    //
    //if(k==1) {cout<<1<<endl<<1<<endl<< return 0;}
    // k
    d=a[1]-a[0];
    series = 1; // length of current chain
    numberOfArithmeticProgression=1;
    firstTerm = a[0];

    for(int i=1; i<k; ++i)
    {
        int tempFirstElemOfProgress;

        //1 2 3 6 8 10
        //d=1
        //
        if(a[i] == a[i-1]+d){
            ++series;
        }
        else{ //new progression 1 2 3 4
            if(series > maxlength) maxlength = series;
            //
            if(i+1<k) d = a[i+1]-a[1];
//            d = a[i]-a[i-1];//d = a[i+1]-a[i]
            series = 1;
            ++numberOfArithmeticProgression;

            if (d<minDiff) {
               minDiff = d;
               firstTerm = tempFirstElemOfProgress;
            }

            tempFirstElemOfProgress = a[i-1];
        }
    }
    cout<<maxlength<<"\n";
    cout<<numberOfArithmeticProgression<<"\n";

    return 0;
}


/*
першому рядку вивести максимальну довжину арифметичної прогресiї,
другому - кiлькiсть прогресiй в яких данна максимальна довжина,
третьому - перший елемент прогресiї з найменшою рiзницею арифметичною прогресiї i в
четвертому - найменшу рiзницю арифметичної прогресiї.

1 2 3 2 1
*/
//1 11 12 12 13 13 13 14 16 18 19 21 22 24 25 25 33 34
/*
 1 11 21
 1 13 25 *three times


1 11 21 101 111


1 1 1 [1 2 3]
1 2 3
1 1 1 1
1 1 1

* */
