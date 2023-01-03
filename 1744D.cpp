#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	int cnt = 0 ;
	vector<int> avail;
	for(int i = 1; i <= n ; i++){
		int x ; cin >> x ;
		cnt += __builtin_ctz(x) ; 
		avail.push_back(__builtin_ctz(i));
	}
	int ans = 0 ;
	sort(avail.begin() , avail.end());
	while(avail.size() > 0 && cnt < n){
		cnt += avail.back() ; 
		avail.pop_back() ; 
		ans ++;
	}
	if(cnt < n) ans = -1;
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  