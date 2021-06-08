#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res = a;
    while( a>= b){
        res += a/b;
        int c = a % b;
        a/=b;
        a += c;
    }
    cout<<res;
}