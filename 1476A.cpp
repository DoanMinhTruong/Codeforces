#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n , k ; cin >> n >> k ; 
	if( n  > k  ){
		cout << 1 + (n % k > 0 ) << endl; 
	}else{
		cout << (n + k - 1) / n  << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  