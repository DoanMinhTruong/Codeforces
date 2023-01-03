#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n < 10) {
            cout<<n<<endl;
        }
        else{

        cout<< 9 + (n / 11) << endl;
        }
    }
}