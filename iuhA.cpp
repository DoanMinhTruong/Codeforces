#include <bits/stdc++.h>
#define int long long
using namespace std;


struct FT{
	vector<int> bit ;
	int n ;  
	FT(int N){
		n = N;
		bit.assign(4 * N , 0) ;
	}
	void update(int idx , int val){
		for(; idx <= n ; idx += idx&(-idx)){
			bit[idx] += val;
		}
	}
	int query(int idx){
		int res = 0 ;
		for(; idx ; idx -= idx & (-idx)) {
			res += bit[idx];
		}
		return res;
	}
	int get(int from , int to){
		return query(to) - query(from - 1);
	}
};

void solve(){
 		
	int n  ; cin >> n ;
	vector<pair<int,int>> a(n) ;
	FT ft(n);
	vector<int> b;
	for(int i =0 ; i < n ; i++){
		cin >> a[i].first >> a[i].second;
		a[i].first--;
		a[i].second--; 
		b.push_back(a[i].first) ; 
		b.push_back(a[i].second);
 	}
 	vector<int> ans ;
 	sort(a.rbegin() , a.rend());
 	sort(b.begin() , b.end() );

 	for(auto [i , j ] : a){
 		int idx = lower_bound(b.begin() , b.end() , j) - b.begin() ;
 		ans.push_back(ft.query(idx)) ;
 		ft.update(idx , 1);
 	}
 	for(int i : ans ) cout << i << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  