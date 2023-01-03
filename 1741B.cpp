#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
	int n; cin >> n ; 
	if( n == 3) {
		cout << -1 << endl;
		return;
	}
	int a[n];
	int now = 1 ;
	for(int i = n / 2  ; i < n ; i++) a[i] = now++;
	for(int i = 0 ; i < n /2 ;  i++) a[i] = now ++;
	for(int i =0 ;  i < n ; i ++)cout << a[i] << " ";
	cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  