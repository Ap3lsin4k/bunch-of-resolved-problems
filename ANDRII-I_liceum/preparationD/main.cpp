#include <bits/stdc++.h>

using namespace std;



static vector<int> a;
static set<vector<int>> allProgression;
static vector<int> progressionToBeSavedInSet;

void f(int beginRange, vector<int>::iterator previousItem, int diff)
{
    vector<int>::iterator nextItem;

    /*
    progressionToBeSavedInSet.push_back(*previousItem);
    //found
   if(nextItem != a.end())//found
    {
        //if b[0], b[1], b[2]... - arifmetic progression, a[1]=a[i], if b[2] exist and equal b[1]+diff exist
        f(beginRange+1, nextItem, diff);
    }*/
    //exit if end of progression
    /* loop
     * */


}

void findAndSaveTheProgression(int beginRange, vector<int>::iterator iterat, int diff)
{
    //to do how much items were found in the vector
    ++beginRange;
    vector<int>::iterator nextItem = find (a.begin()+beginRange, a.end(), *iterat+diff); // important +1

    if(nextItem != a.end())
    {
        //if b[0], b[1], b[2]... - arifmetic progression, a[1]=a[i], if b[2] exist and equal b[1]+diff exist
        //unsigned int
   //     vector<int>::iterator previousItem = nextItem;
        do {
 //           previousItem = nextItem;
            progressionToBeSavedInSet.push_back(*nextItem);
            nextItem = find(a.begin()+beginRange+1, a.end(), *nextItem+diff);
            beginRange = beginRange+1;
        } while (nextItem != a.end());

        allProgression.insert(progressionToBeSavedInSet);
    }
 //   else
        //length of progresion is two, it is non-sence

}


// test and find bug;
/*\
5
1 1 1 2 3

 */
int main()
{
    int k;
    cin>>k;
    int d, maxLength=0, firstTerm, minDiff=INT_MAX;

    for(int i=0; i<k; ++i)
    {
        int unsortedArifmeticTerm;
        cin>>unsortedArifmeticTerm;
        a.push_back(unsortedArifmeticTerm);
    }
    sort(a.begin(), a.end());

   // for(vector<int>::iterator it =a.begin(); it!= a.end(); ++it)
    for(unsigned int i=0; i<a.size()-1; ++i)
    {
        //for b[0] == 1;
        //diff = 10, progression 1, 11, 21
        //diff = 12, prog 1, 13, 25
        //...
        //dif
        for(unsigned int j=i+1; j<a.size(); ++j)
        {
            //a[i] = 1
            //a[j] = 2, 3, 4, 11, 12, 13, 14, 16, ...
            int diff=a[j]-a[i];
            progressionToBeSavedInSet.push_back(a[i]);
            progressionToBeSavedInSet.push_back(a[j]);

            //length is above or eqaual to three
            findAndSaveTheProgression(int(j), a.begin()+j, diff); //length is not
//critical if d == 0
            // number of the same number;
            progressionToBeSavedInSet.clear();
        }
    }
    /*
    for(vector<int> myProgression : allProgression)
    {
        for(int elementInProgression : myProgression)
        {
            cout<<elementInProgression<<" ";
        }
        cout<<"\n";
    }

    cout<<endl;

    cout<<endl;
    */
    vector<int>::size_type numberOfAPwithMaxLength=0; // type is unsigned int
    for(vector<int> myProgression : allProgression)
    {
        if(myProgression.size() > maxLength)
        {
            maxLength = myProgression.size();
            numberOfAPwithMaxLength=1; // count again
        }
        else if(myProgression.size() == maxLength)
        {
            ++numberOfAPwithMaxLength;
        }

    }

    for(vector<int> myProgression : allProgression)
    {
        d=myProgression[1]-myProgression[0];
        if(d<minDiff) // do at least once
        {
            firstTerm = myProgression[0];
            minDiff = d;
        }





    }
    //
    //
    //if(k==1) {cout<<1<<endl<<1<<endl<< return 0;}
    // k
    /*
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
    }*/
//    cout<<"\nANSWERS\n";
    cout<<maxLength<<"\n";
    cout<<numberOfAPwithMaxLength<<"\n";
    cout<<firstTerm<<"\n";
    cout<<minDiff<<"\n";
    int b[256];

    return 0;
}


/*
першому рядку вивести максимальну довжину арифметичної прогресiї,
другому - кiлькiсть прогресiй в яких данна максимальна довжина,
третьому - перший елемент прогресiї з найменшою рiзницею арифметичною прогресiї i в
четвертому - найменшу рiзницю арифметичної прогресiї.


five find all possible progression
find unqiue and if length of progression

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
/*
20
1 2 3 4 11 12 12 13 13 14 16 18 19 21 22 24 25 25 33 34

1 2 3
1 11 21 31
1 12 23 34
1 14 27
1 16 31
2 12 22
2 16 30
2 18 34
3 11 19 27
3 12 21 30
3 13 23 33
3 18 33
11 12 13 14
11 16 21
11 19 27
11 21 31
11 22 33
12 13 14
12 14 16 18
12 21 30
12 23 34
13 16 19 22
13 18 23
13 22 31
13 23 33
14 16 18
14 18 22
14 22 30
16 19 22
16 23 30
19 21 23
19 23 27 31
21 22 23
21 27 33
23 27 31
27 30 33

*/
/*
21
1 2 3 4 5 6 11 12 13 14 16 18 19 21 22 23 27 30 31 33 34

1 2 3 4 5 6 // there are no 1 2 3 4 5 or 1 2 3 4 or 1 2 3;
1 3 5
1 6 11 16 21
1 11 21 31
1 12 23 34
1 14 27
1 16 31
2 3 4 5 6
2 4 6
2 12 22
2 16 30
2 18 34
3 4 5 6
3 11 19 27
3 12 21 30
3 13 23 33
3 18 33
4 5 6
4 11 18
4 13 22 31
4 19 34
5 12 19
5 13 21
5 14 23
5 16 27
5 18 31
5 19 33
6 11 16 21
6 12 18
6 14 22 30
6 18 30
11 12 13 14
11 16 21
11 19 27
11 21 31
11 22 33
12 13 14
12 14 16 18
12 21 30
12 23 34
13 16 19 22
13 18 23
13 22 31
13 23 33
14 16 18
14 18 22
14 22 30
16 19 22
16 23 30
19 21 23
19 23 27 31
21 22 23
21 27 33
23 27 31
27 30 33


6
16
Press <RETURN> to close this window...
19
1 2 3 4 11 12 13 14 16 18 19 21 22 23 27 30 31 33 34

 */
