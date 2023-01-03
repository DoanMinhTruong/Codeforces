#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ; 
	vector<int> a(n);
	for(int& i :a) cin >> i ;
	string s ; cin >> s; 
	map<int , set<char>> ma ;
	for(int i = 0 ; i < n ; i++) {
		ma[a[i]].insert(s[i]);
	} 	
	for(auto [i, j ] : ma ){
		if(j.size() != 1){
			cout << "NO" << endl;
			return;
		}
	}
	cout <<"YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  