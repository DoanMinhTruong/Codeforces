#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
	int n ; cin >> n; 
	string a, b ; cin >> a >> b ;
	set<int> se ; 
	for(int i =0 ; i < n ; i++){
		se.insert((a[i] - '0') ^ (b[i] - '0')) ;
		b[i] = ((b[i] - '0') ^ (a[i] - '0')) + '0';
 	}
 	if(se.size() == 1){
 		vector<pair<int,int>> ans ; 
 		for(int i =0 ; i < n ; i ++){
 			if(a[i] == '1'){
 				ans.push_back({i + 1 , i + 1});
 				a[i] = ((a[0] - '0') ^ 1) + '0';
  				b[0] = ((b[0] - '0') ^ 1) + '0';
 			}
 		}
 		if(b[0] == '1'){
 			ans.push_back({1, 2});
 			ans.push_back({1, 1});
 			ans.push_back({2 ,2});
 		}
 		cout <<"YES" << endl << ans.size() << endl;
 		for(auto [i , j ] : ans) cout << i << " " << j << endl; 
 	}else{
 		cout << "NO" << endl;
 	}

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  