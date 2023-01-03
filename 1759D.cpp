#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
	int n , m ; cin >> n >> m ;
	int last = n % 10 ;
	vector<int> num;
	for(int i = 0 ; i <= 9 ; i++) 
		if( (last * i) % 10 == 0  )
			num.push_back(i);
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  