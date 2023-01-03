#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll n , x ; cin >> n >> x ; 
	ll ans = 0 ; 
	for(int i = 1; i  <= (n) ; i++){
		if(x % i == 0  && x / i <= n ) ans ++ ;
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  