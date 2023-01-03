#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int  m , s ; cin >> m >> s; 
	vector<int> a(m);
	for(int& i : a) cin >> i ; // 3 1 4
	sort(a.begin(),a.end()); // 1 3 4
	int sum = (a.back() * (a.back() + 1) ) / 2 ;
	for(int i : a) sum -= i ;
	s -= sum;
	if(s == 0) {
		cout << "YES" << endl;
		return;
	}
	a.back()++;
	for(int i = 0; i <= 1001 ; i ++){
		int now = a.back() + i;
		int sum1 = (now + a.back()) * (now - a.back() + 1) / 2;
		if(sum1 == s) {
			cout <<"YES" << endl;
			return;
		}
	}
			cout <<"NO" << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  