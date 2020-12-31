#include <bits/stdc++.h>
#define ll long long
#define pb(a) push_back(a)

using namespace std;

const ll mxN = pow(2,17)+1;



int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          ll n;
          cin>>n;
          ll a[n];
          for(auto& i : a) cin>>i;
          ll ans = 0 ;
          for(ll i = 1; i <n;i++)
          {
               ans+= abs(a[i] - a[i-1]);
          }
          ll maxx = max(abs(a[0] - a[1]), abs(a[n-1] - a[n-2]));
          for(ll i =1 ;i<n-1;i++)
               maxx= max(maxx, abs(a[i] - a[i-1]) + abs(a[i] - a[i+1]) - abs(a[i+1] -a[i-1]));
          cout<<ans-maxx<<endl;
     }
}
