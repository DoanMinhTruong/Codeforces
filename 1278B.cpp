#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll a , b; cin >> a >> b; 
	ll mx = max(a, b ) , mn = min(a, b ); 
	if(mx - mn ==0 ) cout << 0 << endl;
	else{
		cout << (mx - mn) << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  