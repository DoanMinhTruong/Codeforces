#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	int a[n] ; 
	int cnt = 0 ;  
	for(int i = 0 ; i < n ; i ++) {
		cin >> a[i] ; 
		cnt += a[i] == 1 ;
	}
	if(cnt > 0 ){
		cout << n - cnt << endl;
		return ;
	}
	int ans = n *3 ;
	for(int i = 0 ; i < n ; i++){
		int g = a[i];
		for(int j = i + 1 ; j < n ; j++){
			g = __gcd(g , a[j]);
			if(g == 1) ans = min(ans , n - 1 + j - i );
		}
	}
	if(ans == n * 3) ans = -1;
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  