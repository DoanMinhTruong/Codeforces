#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<ll,ll>> factor(ll x){
	vector<pair<ll,ll>> pri ; 
	for(ll i = 2 ; i * i <= x ; i++){
		if(x % i == 0 ){
			ll t = 0 ;
			while(x % i ==0 ) {
				x /= i ; t ++;
			}
			pri.push_back({i , t});
		}
	}
	if(x > 1) pri.push_back({x , 1});
	return pri;
}


void solve(){
	ll a , b ; cin >> a >> b; 
	if(a % b == 0 ){
		vector<pair<ll,ll>> fac = factor(b);

		ll ans = 0 ;
		for(auto t : fac){
			ll p = a ;
			while(p % b == 0 ){
				p /= t.first;
			}
			ans = max(ans , p);
		}
		cout << ans << endl;
	}else{
		cout << a << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  