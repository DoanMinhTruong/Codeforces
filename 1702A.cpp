#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t ; cin >> t ;
    vector<long long> num ;
    for(int i =0 ; i < 10; i++){
    	num.push_back(pow(10LL, i));
    }
    while(t--){
    	long long m  ; cin >> m ;
    	int i = num.size() - 1 ;
    	while(num[i] > m && i > 0) i--;
    	cout << m - num[i] << endl;
    }
}  