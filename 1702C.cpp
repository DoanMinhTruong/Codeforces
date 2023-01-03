#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n , q ; cin >> n >> q ;
	vector<int> a(n);
	for(int& i :a) cin >> i ; 
	map<int,vector<int>> ma;
	for(int i = 0 ; i < n ; i ++){
		ma[a[i]].push_back(i);
	}
	for(auto &[i, j] : ma) sort(j.begin() , j.end());
	while(q--){
		int x, y ; cin >> x >> y ; 
		if(ma[x].empty() || ma[y].empty()) {
			cout << "NO\n";
			continue;
		}
		if(ma[y].back() <= ma[x].front()){
			cout << "NO\n";
		}else cout << "YES\n";
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t ; cin >> t ;
     while(t-- ) solve() ; 
}  