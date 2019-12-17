#include <iostream>

using namespace std;

int main()
{
    int t;
    bool f=false;
    cin>>t;
    while(t--)
    {
        string line;
        cin>>line;
        for(int i=1; i<line.size(); ++i)
        {
//            cout<<line[i]<<" ";
//            cout<<(line[i-1] > line[i]);
            if(line[i-1] > line[i])  // 'a' < 'b'
            {
                f=true;
                break;
            }

        }
        if(f) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
/*
hi Andrew
how r u
hello today ill tell about english
whys it important
ill tell about 5 big dick reasons
why is englishkalsjf;lkksadjdfl;ksdjflksjddlk kjsadl;kdjf lslddkjf lksakd;djf l;kssf iejkdsmjfiwfjldkfjo9sdj;dskkefkd english is the most spoken  language in the world important
*/
