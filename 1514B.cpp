#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1e9 + 7 ;
ll pow(ll n , ll k ){
   ll ans = 1;
   for(int i = 0 ; i < k; i++){
      ans = ((ans%MOD)*(n%MOD))%MOD;
   }
   return ans;
}
int main(){
   ll t;
   cin>>t;
   while(t--){
      ll n,k;
      cin>>n>>k;
      cout<< ll(pow(n,k)) % MOD <<endl;
   }
}