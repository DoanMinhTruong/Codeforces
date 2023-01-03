#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	for(int i =0 ; i < n ; i ++){
		if(a[i] == 1) {
			a[i] = 0 ; break;
		}
	}	
	int cnt =0 ; 
	for(int i = 0 ; i < n ; i ++){
		for(int j = i + 1 ; j < n ; j ++){
			if(a[i] == a[j]) cnt ++;
		}
	}
	cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  