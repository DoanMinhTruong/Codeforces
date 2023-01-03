#include <bits/stdc++.h>

using namespace std;

int solve(string s , string t) {
	if(t == "a") return 1 ;
	for(char i : t) if(i == 'a') return -1 ;
	long long res = 1;
	for(int i =0 ; i < s.length() ; i ++) res*=2LL;


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t ;cin >> t; 
    while(t--){
    	string s , t ; cin >> s >> t ; 
    	cout << solve(s ,t) << endl;
    }
}  