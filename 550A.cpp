#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     string s;
     cin>>s;
     ll n = s.length();
     if(s.find("AB") <= n)
     {
          ll res=  s.find("AB");
          if(s.find("BA",res+2) <=n)
          {
               cout<<"YES";return 0;
          }
     }
     if(s.find("BA") <= n)
     {
          ll res=  s.find("BA");
          if(s.find("AB",res+2) <=n)
          {
               cout<<"YES";return 0;
          }
     }
     cout<<"NO";
}
