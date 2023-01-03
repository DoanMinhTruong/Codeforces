#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll l , r , m ; cin >> l >> r >> m ;
	for(ll i = l ; i <= r ; i++){
		if(m >= i && m % i <= (r - l)){
			cout << i << " " <<  l + (m%i) << " " << l << endl;
			break;
		}else if((m%i) - i >= (l -r)){
			cout << i << " " << r + (m%i - i ) << " " << r << endl;
			break;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  