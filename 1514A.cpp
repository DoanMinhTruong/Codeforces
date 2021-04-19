#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
   ll t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      bool has = false;
      for(int& i : a) cin>>i;
      for(int i : a){
         int sq = sqrt(i);
         if(pow(sq,2) !=i ){
            has = true;
            break;
         }
      }
      if(has) cout<<"YES\n";
      else cout<<"NO\n";
         }
}