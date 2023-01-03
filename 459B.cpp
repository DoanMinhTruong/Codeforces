#include <bits/stdc++.h>
#define int long long
using namespace std;

map<int,int> ma;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int& i : a )cin >> i ;

	for(int i : a){
		ma[i]++;
	}
	sort(a.begin() , a.end());
	cout << abs(a.back() - a.front()) << " " ;
	int ans;
	if(a.back() == a.front()){
		ans = (ma[a.front()] -1 )*(ma[a.front()]) / 2; 
	}else ans = ma[a.front()] * ma[a.back()] ;
	cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  