#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n ; cin >> n ;
    long long ans =0 ; 
    map<int,int> x, y ; 
    map<pair<int,int> , int> r ; 
    while(n--){
    	int a , b ; cin >> a >> b ; 
    	ans += x[a]++ + y[b]++ - r[{a , b}]++;
    }
    cout << ans ;

}  