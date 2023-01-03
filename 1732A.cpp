#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int& i : a ) cin >> i ;
	int g = 0 ;
	for(int i = 0 ; i < n; i++){
		g = __gcd(a[i] , i + 1);
	}
	cout << g << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  