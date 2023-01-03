#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int &i : a) cin >> a[i];
	int f[n+1]; f[0] = 0 ;
	for(int i = 0 ; i < n ; i ++) f[i+1] = f[i] + a[i];
	int ans = 1e6;
	for(int i = 1; i <= n ; i++){
		if(f[n] % f[i] == 0){
			int mx = 0 ;
			bool ok = true;
			int p = 0 ;
			int pr = 0 ;
			for(int k = 1;  k <= n ; k++){
				if(f[k] % f[i] == 0 ){
					if(f[k] / f[i] > pr + 1){
						ok = false;
						break;
					}else{
						pr++;
						mx = max(mx , k - p);
						p = k;
					}
				}
			}
			if(ok) ans = min(ans ,mx);
		}
	}
	cout << ans  << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  