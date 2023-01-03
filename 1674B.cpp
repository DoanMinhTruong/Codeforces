#include <bits/stdc++.h>

using namespace std;


int solve(string s){
	set<string> se ; 
	for(char i = 'a' ; i <= 'z' ; i++){
		for(char j = 'a' ; j <= 'z' ; j++){
			if(i != j ) {
				string temp = "" ;
				temp += i ; temp += j;
				se.insert(temp); 
			}
		}
	}
	vector<string> ans(se.begin() , se.end());
	for(int i = 0 ;i < ans.size() ; i ++){
		if(ans[i] == s) {
			return i+1;
		}
		// cout << ans[i] << " ";
	}
	return -1;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t ; cin >> t ;
    while(t--){
    	string s; cin >> s ;
    	cout << solve(s) << endl;
    }
}  