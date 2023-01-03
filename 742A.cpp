#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ; 
	if( n == 0 ) {
		cout << 1 ;return ; 
	}
	int ans ; 
	if( n % 4 == 0 ) ans = 6;
	else if( n % 4 == 1 ) ans = 8 ;
	else if( n % 4 == 2 ) ans = 4 ;
	else if( n % 4 == 3 ) ans = 2 ;  
	cout << ans  ;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  