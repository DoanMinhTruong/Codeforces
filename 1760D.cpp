#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int &i :a ) cin >> i ;
	bool check = false; 
	for(int i =1 ; i < n ; i ++){
		if(a[i] == a[i-1]);
		else if(a[i] > a[i - 1]){
			check = true;
		}else if(check){
			cout << "NO\n";
			return;
		}
	}	
	cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  