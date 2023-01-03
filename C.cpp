#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s ; 
    int n ; cin >> n ; 
    pair<int,int> p ;
    int mn = 1e9 ; 
    for(int i =  0 ; i  < n - 1 ; i ++){
    	int now = s[i] + s[i+1] - 2 * 'a';
    	if(now < mn ){
    		mn = now ; 
    		p = {i , i + 1 } ;
    	}
    }
    char a = s[p.first] , b = s[p.second] ; 
    if(a>b) swap(a , b);
	for(int i =0 ; i < n/ 2; i ++) {
		cout << a << b ;
	}
	if(n & 1) cout << a ;
}  