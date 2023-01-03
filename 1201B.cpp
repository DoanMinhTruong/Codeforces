#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<ll> a(n) ; 
	for(ll &i : a) cin >> i ;
	ll ans = accumulate(a.begin() , a.end() , 0LL ) ; 
	sort(a.begin() , a.end()) ; 
	cout << ((ans % 2 == 0 && a.back() <= ans / 2) ? "YES" : "NO") << endl; 	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  