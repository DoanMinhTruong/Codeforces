#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	vector<int> a(3);
	for(int &i : a) cin >> i ;
	sort(a.begin() , a.end());
	cout << a[1] << endl;	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  