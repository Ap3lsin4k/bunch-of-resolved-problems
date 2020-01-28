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
		list<set<char>>::iterator password = parent;
		for (++password; password != s.end(); ++password)
		{
			bool flag = false;
			//does it work properly 
			for (char symbol : *password)
			{
				cout << symbol << " ";
				//at least one symbol in parent
				if ((*parent).find(symbol) != parent->end())
				{
					cout << "Given first set: \"";
					for (auto symToPrint : *parent)
					{
							cout << symToPrint;
					}
					cout << "\", and second set: \"";
					for (auto symToPrint : *password)
					{
						cout << symToPrint;
					}
					cout<<"\", common item is '"<<symbol<<"' at position 0x";
					cout << &(parent->find(symbol));
					cout<< "\n";

					parent->insert(password->begin(), password->end());
					flag = true;
					break;// pasword
				}
			}
			if (flag)
			{
				// Notice that the iterator is decremented after it is passed 
				// to erase() but before erase() is executed
				s.erase(password--);
			}
			cout << "\n";
		}
	}



	
	cout << "\n\n========AFTER_MERGING========\n";
	for (auto str: s)
	{
		for (auto ch : str)
		{
			cout << ch;
		}
		cout << "\n";
	}
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


*/
//if sets intersects