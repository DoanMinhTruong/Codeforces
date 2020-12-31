#include <bits/stdc++.h>
#define ll long long
#define pb(a) push_back(a)

using namespace std;

const ll mxN = pow(2,17)+1;
ll st[4*mxN];
ll a[mxN];

void build(ll id, ll l ,ll r , bool status)
{
     if( l == r )
     {
          st[id] = a[l];
          return;
     }
     ll mid = (l + r) /2;
     build(id * 2 , l , mid, status ^ 1);
     build(id*2 + 1 ,mid+ 1 ,r , status ^ 1);
     if(!status)
          st[id] = st[id*2] ^ st[id*2 + 1];
     else 
          st[id] = st[id*2] | st[id*2+1];
}
void update(ll id, ll l ,ll r , ll pos ,ll val, bool status)
{
     if(l == r)
          {
               st[id] = val;
               return;
          }
     ll mid = (l + r)/2;
     if(pos <= mid)
          update(id*2, l, mid , pos,val, status ^ 1);
     else 
          update(id*2 + 1 , mid + 1, r,pos,val ,status ^ 1);

     if(!status)
          st[id] = st[id*2] ^ st[id*2 + 1];
     else 
          st[id] = st[id*2] | st[id*2+1];    
}

int main()
{
     ll n,m;
     cin>>n>>m;
     ll k = n;
     n=pow(2,n);
     for(ll i = 1; i <= n ; i++)
          cin>>a[i];
     build(1, 1, n,k&1);
     while(m--)
     {
          ll x,y;
          cin>>x>>y;
          update(1,1,n,x,y,k&1);
          cout<<st[1]<<endl;
     }
}
