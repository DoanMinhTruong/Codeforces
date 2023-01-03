#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ; 

	vector<pair<int,int>> odd , even ; 
	for(int i =0 ; i < n ; i++){
		int x ; cin >> x ;
		if(x % 2 == 0 ) even.push_back({x, i });
		else odd.push_back({x , i });
	}
	if(even.size() < odd.size()) cout << even[0].second + 1<< endl;
	else cout << odd[0].second + 1<< endl; 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  