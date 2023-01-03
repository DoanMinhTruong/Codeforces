#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n ; cin >> n ; 
	map<int,int> ma ; 
	vector<pair<int,int>> a ;
	for(int i = 0 , x , y ; i < n ; i ++){
		cin >> x >> y ;
		a.push_back({x,y});
		ma[x]++;
		ma[y]++;
	}
	// for(auto [i,j] : ma) if(j != 2) { cout << "NO\n";return ;}
	map<int, int> ma1 , ma2 ;
	for(auto [i, j ] : a) {
		if(ma1[i] ==0  && ma1[j] ==0 && ma2[i] ==0 && ma2[j] ==0){
			ma1[i]++;
			ma1[j]++;
		}
		else if(ma1[i] > 0  || ma1[j] > 0 ){
			ma2[i]++;
			ma2[j]++;
		}else if(ma2[i] > 0  || ma2[j] > 0 ){
			ma1[i]++;
			ma1[j]++;
		}else if(ma1[i] == 0 && ma1[j] ==0 ){
			ma1[i]++;
			ma1[j]++;
		}else if(ma2[i] == 0 && ma2[j] ==0 ){
			ma2[i]++;
			ma2[j]++;
		}
	}
	for(auto [i,j] : ma1) if(j != 1) {
		cout << "NO\n";return;
	}
	for(auto [i,j] : ma2) if(j != 1) {
		cout << "NO\n";return;
	}
	cout << "YES\n";
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t ;
    while(t--) solve();
}  