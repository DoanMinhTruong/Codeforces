#include <bits/stdc++.h>
#define ll long long
#define MAX 100000
using namespace std;
pair<ll,ll>  v[MAX];
 
ll ST[MAX*4];
 
 
 bool cmp_pair(pair<int, int> A, pair<int, int> B) {
    return (A.second > B.second || (A.second == B.second && A.first > B.first));
}
 
 
void update(ll id, ll l, ll r) {
    if (l == r) {
          ST[id] = v[l].first; 
          return;
     }
    ll mid = (l + r) / 2;
    update(id*2, l, mid);
    update(id*2 + 1, mid+1, r);
    ST[id] = __gcd(ST[id*2], ST[id*2 + 1]);
}
int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return 0;
    }
    if (u <= l && r <= v) {
        return ST[id];
    }
    int mid = (l + r) / 2;
    return __gcd(get(id*2, l, mid, u, v), get(id*2 + 1, mid+1, r, u, v));
}
 
int main()
{
     ll n;
     cin>>n;
     for(ll i=0;i<n;i++)
     {
          cin>>v[i].first;
          v[i].second=i+1;
     }
update(1,0,n-1);
     sort(v,v+n);
     cout<<endl;
     ll t;
     cin>>t;
     while(t--)
     {
          ll l,r;
          cin>>l>>r;
         ll cnt=get(1,0,n-1,l-1,r-1);
          
          ll L=lower_bound(v, v+n, pair<ll,ll> {cnt,l}) - v;
          ll R=upper_bound(v, v+n, pair<ll,ll> {cnt,r}) - v;
          ll sum=0;
          cout<<r-l+1-(R-L)<<endl;
          
          
          
          
     }
}
