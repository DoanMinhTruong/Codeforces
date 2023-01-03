#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll n ; cin >> n ;
	ll round = n / 2;
	ll count = n * 2 + ( n - 2 ) * 2 ; 
	ll ans = 0;
	for(ll i = n ; i >= 0 ; i -= 2){
		ans += (i / 2) * ( i * 2 + (i - 2) * 2) ;
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  