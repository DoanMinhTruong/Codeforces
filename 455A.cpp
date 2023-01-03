#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
     ll n;
     cin>>n;
     ll a[100000+7];
     memset(a, 0, sizeof(a));
     ll dp[100000 + 7];
     for(ll i =0,x ; i < n ; i++){
          cin>>x;
          a[x]++;
     }
     dp[0]=0;
     dp[1] = a[1];
     for(ll i = 2; i <= 100000; i++){
          dp[i] = max(dp[i-1] , dp[i-2] + i*a[i]);
     }
     cout<<dp[100000];
}
