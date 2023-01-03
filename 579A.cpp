#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1; 
    int res  =0 ;
    while(n){
        int d = n / 2;
        if( d* 2 != n ) res +=1; 
        n/=2;
    }
    cout<<res;
}