#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m; 
        cin>>n>>m;
        int board[n+5];
        for(int i=1;i<=n;i++) board[i] = i;
        for(int _=1,x,y;_<=m;_++){
            cin>>x>>y;
            board[x] = y;
        }
        int ans =0;
        for(int i=1;i<=n;i++){
            int change = i;
            while(board[change]!=change){
                swap(board[change],change);
                ans++;
                if(change == i) ans++;
            }
        }
        cout<<ans<<endl;
    }
}
