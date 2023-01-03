#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
    	string s ;  cin >> s; 
    	set<char> se ; 
    	int ans =0 ; 
    	for(int i = 0 ; i < s.length() ; i ++){
    		if(se.size() != 3)
    			se.insert(s[i]);
    		else{
    			if(se.find(s[i]) == se.end()){
    				ans++ ; 
    				se.clear();
    				se.insert(s[i]);
    			}
    		}

    	}
    	ans += !se.empty();
    	cout << ans << endl;
    }
}  