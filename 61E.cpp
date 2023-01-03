#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mxN = 1e6 + 7;
ll st[4*mxN] = {0} ,first[mxN + 1] = {0} ,second[mxN+1] ={0};
void update(ll id, ll l ,ll r ,ll x)
{
     if(l == r)
     {
          st[id]++;
     }
     else{
          ll mid = (l+r)/2;
          if(x <= mid)
               update(id*2 , l ,mid,x);
          else
               update(id*2 +1, mid+1,r,x);
          st[id] = st[id*2] + st[id*2 + 1];
     }
}
ll get(ll id,ll tl, ll tr, ll l ,ll r)
{
     if(tr < l || tl > r)
          return 0;
     if(tl >=l && r >= tr)
          return st[id];
     ll mid = (tl + tr) /2;
     return get(id*2, tl, mid, l ,r) + get(id*2 + 1 , mid+1,tr,l ,r);
}
void nenmang(vector<ll> &a)
{
     vector<ll> s = a;
     map<ll,ll> m;
     sort(s.begin(),s.end());
     ll j =1;
     for(ll i=1 ;i<=s.size()-1;i++) m[s[i]] = j++;
     for(ll i=1;i<=a.size()-1;i++) a[i] = m[a[i]];
}
int main()
{
     vector<ll> a;
     ll n;cin>>n;
     a.resize(n+1);
     for(ll i = 1;i<=n ;i++) cin>>a[i];
     nenmang(a);
     //for(ll i=1;i<=n;i++) cout<<a[i]<<" "; 
     for(ll i=1;i<=n;i++)
     {
          first[i] = get(1,1,n,a[i],n);
          //cout<<first[i]<<" ";
          update(1,1,n,a[i]);
     }
     //cout<<endl;
     for(ll& i : st) i = 0;
     for(ll i=n;i>=1;i--)
     {
          second[i] = get(1,1,n,1,a[i]);
          //cout<<second[i]<<" ";
          update(1,1,n,a[i]);
     }
     ll ans=0;
     for(ll i=1;i<=n;i++)
     {
          ans+=first[i]*second[i];
     }
     cout<<ans;
}
