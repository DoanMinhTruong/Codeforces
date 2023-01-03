#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t ;cin >> t ;
    while(t--){
    	int x, y ; cin >> x >> y ; 
    	if(y < x) {
    		cout << "0 0\n";
    		continue;
    	}
    	int a = y / x ;
    	if(x * a != y) {
    	cout << "0 0\n";
    		continue;	
    	}
    	cout << 1 << " " ; 
    	cout << y / x << endl;
    }
}  