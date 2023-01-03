#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t1 ,t2 ; cin >> t1 >> t2;
	for(int i = 0 ; i <= 1000; i++){
		for(int j = 0 ; j <= 1000 ; j++){
			if(t1 * i + t2 * j == (80 * (i + j))){
				cout << i << " " << j ;
				return;
			}
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  