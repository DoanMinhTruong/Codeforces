#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n;
	ll sum = 0 ; 
	int posion = 0 ; 
	priority_queue<int , vector<int>, greater<int>> p ; 
	for(int i =0 , x ; i < n ; i++){
		cin >> x ; 
		sum += x;
		p.push(x) ;  
		posion++;
		while(sum < 0){
			sum -= p.top() ;
			p.pop();
			posion--;
		}
	}
	cout << posion << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  