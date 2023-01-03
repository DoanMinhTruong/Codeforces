#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<ll> a(n) ;
	ll mn = 1e9;
	for(ll& i : a) {
		cin >> i ;
		mn = min(mn , i );
	}

	if(a[0] == mn ) cout << "Yes" <<endl;
	else cout <<"No" <<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  