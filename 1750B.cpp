#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll case1(string s ){
	ll cnt = 0 ;
	for(char i : s) if( i == '1') cnt ++ ;
	ll res = cnt * (s.length() - cnt) ; 
	return res ;
}
ll case2(string s){
	ll cnt = 0  ;
	ll mx = -1e9 ;
	for(int i =0 ; i< s.length() ; i ++){
		if(s[i] == '1') cnt++;
		else{
			mx = max(mx , cnt) ; 
			cnt = 0 ; 
		}
	}
	mx = max(mx , cnt) ; 
	ll res = mx * mx ;
	return res ;
}
ll case3(string s){
	ll cnt = 0  ;
	ll mx = -1e9 ;
	for(int i =0 ; i< s.length() ; i ++){
		if(s[i] == '0') cnt++;
		else{
			mx = max(mx , cnt) ; 
			cnt = 0 ; 
		}
	}
	mx = max(mx , cnt) ; 
	ll res = mx * mx ;
	return res ;	
}

void solve(){
	int n ; cin >> n ;
	string s ; cin >> s ;
	cout << max({case1(s) , case2(s) , case3(s)}) << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  