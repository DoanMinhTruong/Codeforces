#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; string s;
	cin >> n >> s ;
	int cnt = 0;
	int ans = 0; 
	for(char i : s){
		if( i == '(') cnt += 1;
		else cnt -= 1;
		ans = max(ans , cnt >= 0 ? 0 : abs(cnt));
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  