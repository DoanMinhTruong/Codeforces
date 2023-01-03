#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int  n ; char c; 
	cin >> n >> c ;
	string s ; cin >> s;
	s += s ;
	int ans = -1e9 ; 
	for(int i = 0 ; i < s.length() ; i ++){
		if(s[i] == c){
			int cnt = 0; 
			while( i < s.length() && s[i] != 'g' ){
				cnt ++;
				i++;
			}
			ans = max(ans , cnt);
		}
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  