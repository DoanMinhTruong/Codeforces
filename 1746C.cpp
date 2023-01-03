#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	vector<pair<int,int>> v; 
	for(int i = 0 ; i < n - 1 ; i ++){
		v.push_back({a[i]- a[i+1] , i });
	}
	sort(v.begin() , v.end());
	cout << 1 << " ";
	for(auto [i,j] : v){
		cout << j + 2 << " ";
	}
	cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  