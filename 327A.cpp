#include <bits/stdc++.h>
#define ll long long
#define FiIN(name)         freopen(name,"r",stdin)
#define FiOUT(name)        freopen(name,"w",stdout)
#define fi                 first
#define se                 second
#define FAST               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
     FAST;
     ll n;
     cin>>n;
     vector<ll> b(n);
     for(auto& i : b) cin>>i;
     ll maxx = 0;
    
     for(ll i=0;i<n;i++)
     {
          for(ll j=i;j<n;j++)
          {
               vector<ll>  a = b;
               ll ans = 0;
               for(int k = i; k <=j;k++)
               {
                    a[k]^=1;
               }
               for(ll k=0;k<n;k++)
               {
                    if(a[k] == 1) ans++;
               }
               maxx = max(ans,maxx);
          }
     }
     cout<<maxx;
}
