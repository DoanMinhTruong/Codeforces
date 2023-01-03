#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n , a , b ; cin >> n >> a >> b ;
	int ans = 0 ; 
	for(int i = a + 1 ; i <= n ; i++){
		if( n - i <= b) ans ++ ; 
	}	
	cout << ans ;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  