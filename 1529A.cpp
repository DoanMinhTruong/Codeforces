#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> a(n);
            for(int& i : a) cin>>i;
            sort(a.begin() , a.end());
            int count = 0;
            for(int i : a) { 
                if(i == a[0]) count++;
            }   
            cout<<a.size() - count<<"\n";
        }
}
