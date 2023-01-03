#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n , q ; cin >> n >> q ;
	vector<ll> a(n);
	ll even = 0 , odd = 0 ;
	ll n_even = 0 , n_odd = 0 ; 
	for(ll &i : a) {
		cin >> i ;
		if(i & 1) {
			odd += i ; 
			n_odd ++; 
		}else{
			even += i ; 
			n_even++ ; 
		}
	} 
	while(q--){
		ll t , x; cin >> t >> x ;
		if(t & 1){
			if(x & 1){
				// cout << even << " " << odd << " " << n_odd << " " << x << endl;
				even = even + odd + n_odd * x ; 
				n_even += n_odd ; 
				n_odd = 0 ; 
				odd = 0 ;  
				// cout << "OK" << endl;
			}else{
				odd += n_odd * x ; 
			}
		}else{
			if(x & 1){
				odd = odd + even + n_even * x ;
				n_odd += n_even ; 
				n_even = 0 ;
				even = 0;
			}else{
				even += n_even * x; 
			}
		}
		cout << (odd + even) << endl;
	}


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  