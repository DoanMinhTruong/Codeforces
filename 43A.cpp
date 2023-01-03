#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	map<string, int> ma ;
	for(int i =0 ; i < n ; i++){
		string s;  cin >> s; 
		ma[s]++;
	}
	int mx = -1; 
	string ans = "";
	for(auto [ i  , j ] : ma ){
		if(j > mx){
			mx = j;
			ans = i ;
		}
	}
	cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  