#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n , m ; cin >> n >> m ; 
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n ; i++){
    	cin >> a[i].first; 
    	a[i].second =  i+ 1; 
    }
    if(n == 1){
    	cout << 1 ;
    	return 0 ;
    }
    while(!a.empty()){
    	a[0].first -= m ;
    	if(a[0].first > 0 ) {
    		a.push_back(a[0]);
    	}
    	a.erase(a.begin());
    	if(a.size() == 1) {
    		cout << a[0].second;
    		return 0 ;
    	}
    }
}  