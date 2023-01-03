#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n , a , b; cin >> n >> a >> b; 
	if( (n == a && n == b) ) {
		cout <<"Yes\n";return;
	}
	if((a + b) < n- 1) {
		cout << "Yes\n" ; return;
	}	
	cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  