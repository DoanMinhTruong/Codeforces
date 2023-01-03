#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n  ;
	if( n== 1) cout << 1 << endl;
	else if( n ==2  ) cout << -1 << endl; 
	else{
		int a[n * n ] ; 
		int now = 1 ;
		for(int i = 0 ; i < n * n ; i +=2) a[i] = now++;
		for(int i = 1; i < n * n ; i+=2 ) a[i] = now++;
		for(int i = 1 ; i <= n * n ; i ++){
			cout << a[i-1] << " ";
			if(i % n  ==0 && i != 1) cout << endl ;
		}
	}	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  