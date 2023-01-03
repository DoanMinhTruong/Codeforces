#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     int l,r;
     cin>>l>>r;
     for(ll i=l;i<=r;i++)
     {
          int ii = i;
          string res = "";
          while(ii)
          {
               int j = ii%10;
               res += j + '0';
               ii/=10;
          }
          reverse(res.begin(),res.end());
          set<char> s;
          for(char i : res) s.insert(i);
          if(s.size() == res.length())
          {
               cout<<res<<endl;
               return 0;
          }
     }
     cout<<-1;

}
