#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int j ){
	int n ; cin >> n ; 
	for(int i =0 ; i < n ; i ++){
		int x , y; cin >> x >> y ;
	}
	cout << "Case #" << j << ": " << ( n == 1 ? 1 : 2) << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve(t+1);
}  