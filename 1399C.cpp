#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         ll a[n];
         for(ll i=0;i<n;i++) cin>>a[i];
         set<ll> s;
         for(ll i=0;i<n;i++)
          for(ll j=0;j<n;j++)
               if(i!=j) s.insert(a[i]+a[j]);
          
          ll maxx=0;
         for(auto k : s)
         {
              ll b[51]={0};
               ll count=0;
              for(ll i=0;i<n;i++)
               {
                    if(b[i]==1) continue;
                    for(ll j=0;j<n;j++)
                    {
                         if(i==j || b[j]==1) continue;
                         if(a[i]+a[j]==k)
                         {
                              b[i]=1;
                              b[j]=1;
                              count++;
                              break;
                         }
                    }
                    maxx=max(count,maxx);
               }
         }
         cout<<maxx<<endl;
    }
}
