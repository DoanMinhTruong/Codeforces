#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s ; cin >> s ; 
	int n = s.length() ;
	int p ; cin >> p ;
	vector<pair<int,int>> v ;
	for(int i =0 ; i < n ; i ++){
		v.push_back({s[i] , i});
	}
	sort(v.begin() , v.end() );
	vector<pair<int,int>> ans ; 
	vector<int> res ; 
	int total = 0 ; 
	for(int i =0 ; i < v.size() ; i ++){
		if(total + (v[i].first - 'a' + 1) <= p){
			total += (v[i].first - 'a' + 1);
			res.push_back(v[i].second);
		}  else break ; 
	}
	sort(res.begin() , res.end());
	for(auto i : res){
		cout << s[i] ;
	}
	cout << endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t ; cin >> t; 
    while(t--) solve();
}  