#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n , m , price_for_one, price_for_m ; 
    cin >> n >> m >> price_for_one >> price_for_m ; 
    double rate1 = price_for_m / m ; // price for one (m)
    if(rate1 >= price_for_one){
        cout << n * a << endl;
    }else{
        int remain = (n % m) * price_for_one ; 
        if(remain < price_for_m)
            cout << (n / m ) * price_for_m + price_for_m << endl;
        else
            cout << (n / m ) * price_for_m + remain << endl;
    }
}  