#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7 ;


void solve(){
	int n , l , r; cin >> n >> l >> r; 
	l--;
	vector<int> c(3, 0 );
	for(int i = 0 ; i < 3 ; i ++){
		c[i] = (r + 3 - i)/3 - (l +3 - i ) / 3;
	}
	for(int i : c) cout << i << " " ;
		cout << endl;
	int dp[n+1][3] = {0}; 
	dp[0][0] = 1 ;
	for(int i = 0 ; i <n ; i ++){
		for(int j = 0 ; j < 3; j ++){
			for(int k = 0 ; k < 3; k++){
				dp[i+1][(j+k)%3] += dp[i][j] * c[k];
				dp[i+1][(j+k)%3] %= MOD;
			}
		}
	}
	cout << dp[n][0] << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  