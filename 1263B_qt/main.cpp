#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>
#include <list>

using namespace std;
typedef unsigned short us;
typedef unsigned int ui;

/*
excuses
let x1<x3
 * */



/*void f


void f2(set<char>& queue)
{
    for (char extraSymbol : queue)
    {
            for (++password; password != s.end(); ++password)
            {

            }
    }
    parent->insert(queue.begin(), queue.end());
}*/

const bool debugMode=false;

int main()
{
    ui n;
    cin >> n;
    set<char> temporarySetChar;
    list<set<char>> s(n, temporarySetChar);
    string tempString;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cin >> tempString;
        for (ui j = 0; j < tempString.size(); ++j)
        {
            (*it).insert(tempString[j]);
        }

    }


    for (list<set<char>>::iterator parent = s.begin(); parent != s.end(); ++parent)
    {
        set<char> temporaryParent = *parent;
        bool again;
         do{
            set<char> queue;
            list<set<char>>::iterator password = parent;
            for (++password; password != s.end(); ++password)
            {
                //does it work properly
                for (char symbol : temporaryParent)
                {
                    if(debugMode)
                           cout << symbol << " ";
                    //at least one symbol in parent
                    if ((*password).find(symbol) != password->end())
                    {
                        if(debugMode){
                            cout << "Given first set: \"";
                            for (char aSetToPrint : temporaryParent)
                            {
                                    cout << aSetToPrint;
                            }
                            cout << "\", and second set: \"";
                            for (char symToPrint : *password)
                            {
                                cout << symToPrint;
                            }
                            cout<<"\", common item is '"<<symbol<<"'. Union that to parent: \"";
                            for (char parentSetToPrint : *parent)
                            {
                                cout << parentSetToPrint;
                            }
                            //cout << ((*password).find(symbol));
                            cout<< "\"\n";
                        }

                        //delete parent->insert(password->begin(), password->end());
                        queue.insert(password->begin(), password->end());

                        // Notice that the iterator is decremented after it is passed
                        // to erase() but before erase() is executed
                        s.erase(password--);
                        break;// pasword
                    }
                }
                //deprecated
                if(debugMode)
                    cout << "\n";
            }
           //before going to next parent check if
//            password = parent;
//            set<char> queue;

//            for (char extraSymbol : queue)
//            {
//                for (++password; password != s.end(); ++password)
//                {

//                }
//            }
            again = not queue.empty();
            if (again)
            {
                //it contains new chars
                temporaryParent = queue;

                //add new symbols to list
                parent->insert(queue.begin(), queue.end());

                //empty queue at next iteration
            }

        }while(again);
    }




    if(debugMode){
        cout << "\n\n========AFTER_MERGING========\n";
        for (auto str: s)
        {
            for (auto ch : str)
            {
                cout << ch;
            }
            cout << "\n";
        }
    }
    cout<<s.size();
    return 0;
}
/*
10
abbaba
absdasdas
asdjasd
asdasklk
klkl
wk
wew
ewew
klk
kkl
*/
/*
Make shorter input from 10**6 to 27
for each set
{
    if current password in currentParentSset:
        union parent and daughter;
        change daughter to parent
        next set
}

//create memory of deleted password and check
*/
//if sets intersects
