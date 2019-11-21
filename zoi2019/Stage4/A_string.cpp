#include <bits/stdc++.h>
#include <chrono>
using namespace std;

int main()
{
  
  
  
    long long n;
    cin >> n;
 
  auto t1 = std::chrono::high_resolution_clock::now();
  unsigned __int64 old = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
 
 
    string s1, s2;
    for(long long i=0; i<n; ++i)
    {
        s1 = to_string(rand()%1000000);
		 s2= to_string(rand()%1000000);
        string s="";
        // rotate input "abcde" output "edcba"
        for(long long i=s1.length()-1; i>=0; --i){
            s+=s1[i];
        }
        s1=s;
        s="";
        for(long long i=s2.length()-1; i>=0; --i){
            s+=s2[i];
        }
        s2=s;
        
		long long a1=stoi(s1);
        long long a2=stoi(s2);
        s=to_string(a1+a2);
        string ss="";
        for(long long i=s.length()-1; i>=0; --i)
        {
            ss+=s[i];
        }
        s=ss;
        long long k=0;
        char nyl='0';
        while(s[k]==nyl)
        {
            ++k;
        }
        if(k==0) cout << s << endl;
        else cout << s.substr(k, s.length()-k+1) << endl;
        cout << endl;
    }
    
    
  unsigned __int64 now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
  cout<<"milliseconds:";
  cout<<(now-old);
  cout<<"\n";
  old = now;
  
  
  
    return 0;
}
