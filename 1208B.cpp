#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[2005] ;
set<int> s ; 
void solve(){
	ll n ; cin >> n ; 
	for(int i = 1 ; i <= n ; i ++) cin >> a[i] ;
	int ans = n - 1;
	for(int i = 0 ; i <= n ; i++){
		if(a[i]){
			if(s.find(a[i]) != s.end()) break;
			s.insert(a[i]);
		}
		set<int> t ;
		for(int j = n + 1; j > i ; j--){
			if(s.find(a[j]) != s.end() || t.find(a[j]) != t.end()) break;
			ans = min(ans , j - i - 1);
			if(a[j]) t.insert(a[j]);
		}
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  