#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	string s1 , s2 ; cin >> s1 >> s2 ;
	int cnta = 0  , cntb = 0 ;
	for(int i =0 ; i < n ; i ++){
		cnta += (s1[i] == 'a') + (s2[i] == 'a');
		cntb += (s1[i] == 'b') + (s2[i] == 'b');
	}
	
	vector<int> ab , ba ;
	for(int i = 0;  i < n ; i++){
		if(s1[i] == 'a' && s2[i] == 'b'){
			ab.push_back(i);
		}else if(s1[i] == 'b' && s2[i] == 'a'){
			ba.push_back(i);
		}
	}
	vector<pair<int,int>> ans;
	if(ab.size() >= 2){
		while(!ab.empty()){
			int ab1 = ab.back();
			ab.pop_back();
			int ab2 = ab.back();
			ab.pop_back();
			ans.push_back({ab1, ab2});
			if(ab.size() == 1) break;
		}
	}
	if(ba.size() >= 2){
		while(!ba.empty()){
			int ba1 = ba.back();
			ba.pop_back();
			int ba2 = ba.back();
			ba.pop_back();
			ans.push_back({ba1, ba2});
			if(ba.size() == 1) break;
		}
	}
	if(ab.size() + ba.size() == 1){
		cout << -1;
	}else {
		if(ab.size() + ba.size() == 2){
			ans.push_back({ab[0]  , ab[0] });
			ans.push_back({ab[0]  , ba[0] });
		}
		cout << ans.size() << endl;
		for(auto [i,j] : ans) cout << i+1 << " " << j+1 << endl;
		// if(ab.size() + ba.size() == 2){	
		// 	cout << ab[0]+1 << " " << ab[0]+1 << endl;
		// 	cout << ab[0]+1 << " " << ba[0]+1 << endl;
		// }
	}
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  