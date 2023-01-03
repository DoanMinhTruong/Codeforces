#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<ll> a(n);
	for(ll &i :a ) cin >> i;
	ll g = 0;
	for(int i =0 ; i < n  ; i ++){
		g = __gcd(g , a[i]);
	} 
	ll mx = a[n-1]/g;
	cout << mx << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  