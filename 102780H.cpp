#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll n ; cin >> n ;
	n = (n % 13) % 5 ;
	n %=2 ;
	cout << n ;	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  