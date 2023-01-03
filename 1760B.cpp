#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	string s ; cin >> s ;
	sort(s.begin() , s.end());
	cout << s.back() - 'a' + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  