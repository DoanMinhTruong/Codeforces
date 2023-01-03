#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int &i : a) cin >> i ;
	bool check = n & 1 ;
	for(int i = 2; i < n ; i ++)
		check |= a[i] != a[i - 2];
	if(!check) cout << n /2 + 1 << endl;
	else cout << n << endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  