#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	string s ; cin >> s;
	vector<int> index[26];
	int n = s.length() ; 
	for(int i = 0 ; i < n ; i ++){
		index[s[i]-'a'].push_back(i+1);
	}
	int u = s[0] - 'a' , v = s.back() - 'a';
	vector<int> ans;
	int sgn = (u > v ? -1 : 1);
	for(int i = u; sgn * (v - i) >= 0 ; i += sgn){
		for(int x: index[i]) ans.push_back(x);
	}
	cout << abs(u - v) << " " << ans.size() << "\n";
	for(int x : ans) cout << x << " ";
		cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  