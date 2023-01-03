#include <bits/stdc++.h>
#define ll long long
#define FiIN(name)         freopen(name,"r",stdin)
#define FiOUT(name)        freopen(name,"w",stdout)
#define FOR(a,b,c)         for(ll i=a;i<=b;i+=c)
#define pb(a)                 push_back(a);
#define fi                 first
#define se                 second
#define FAST               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
     FAST;
     //  FiIN("in.txt");
     //  FiOUT("out.txt");
     ll s,n;
     cin>>s>>n;
     vector<pair<ll,ll>> v(n);
     for( ll _=0 ; _<n ; _++)
     {
          cin>>v[_].fi>>v[_].se;
     }
     sort(v.rbegin(),v.rend());
     bool check = true;
     while(!v.empty())
     {
         
          if(s > v.back().fi)
          {
               s+=v.back().se;
               v.pop_back();
          }
          else{
              check = false;
              break;
              
          }
     }
     if(check) cout<<"YES";
     else cout<<"NO";
     
}
