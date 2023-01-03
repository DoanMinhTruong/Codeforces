#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n , l , r ,cnt; cin >> n >> l >> r; 
    cnt = 0 ;
    for(int c1 = l ; c1 <= r ; c1++)
        if((c1 )%3==0)
            cnt++;
    cout << cnt <<endl ;cnt = 0 ;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
        if((c1 + c2 )%3==0)
            cnt++;
    cout << cnt <<endl ;cnt = 0 ;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
    for(int c3 = l ; c3 <= r ; c3++)
        if((c1 + c2 + c3 )%3==0)
            cnt++;
    cout << cnt <<endl ;cnt = 0 ;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
    for(int c3 = l ; c3 <= r ; c3++)
    for(int c4 = l ; c4 <= r ; c4++)
        if((c1 + c2 + c3 + c4 )%3==0)
            cnt++;
    cout << cnt <<endl ;cnt = 0 ;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
    for(int c3 = l ; c3 <= r ; c3++)
    for(int c4 = l ; c4 <= r ; c4++)
    for(int c5 = l ; c5 <= r ; c5++)
        if((c1 + c2 + c3 + c4 + c5 )%3==0)
            cnt++;
    cout << cnt <<endl ;cnt = 0 ;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
    for(int c3 = l ; c3 <= r ; c3++)
    for(int c4 = l ; c4 <= r ; c4++)
    for(int c5 = l ; c5 <= r ; c5++)
    for(int c6 = l ; c6 <= r ; c6++)
        if((c1 + c2 + c3 + c4 + c5 + c6)%3==0)
            cnt++;
    cout << cnt <<endl ;
    cnt = 0 ;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
    for(int c3 = l ; c3 <= r ; c3++)
    for(int c4 = l ; c4 <= r ; c4++)
    for(int c5 = l ; c5 <= r ; c5++)
    for(int c6 = l ; c6 <= r ; c6++)
    for(int c7 = l ; c7 <= r ; c7++)
        if((c1 + c2 + c3 + c4 + c5 + c6 + c7)%3==0)
            cnt++;
    cout << cnt <<endl ;
    cnt =0 ;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
    for(int c3 = l ; c3 <= r ; c3++)
    for(int c4 = l ; c4 <= r ; c4++)
    for(int c5 = l ; c5 <= r ; c5++)
    for(int c6 = l ; c6 <= r ; c6++)
    for(int c7 = l ; c7 <= r ; c7++)
    for(int c8 = l ; c8 <= r ; c8++)
        if((c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8)%3==0)
            cnt++;
    cout << cnt << endl;
    cnt =0;
    for(int c1 = l ; c1 <= r ; c1++)
    for(int c2 = l ; c2 <= r ; c2++)
    for(int c3 = l ; c3 <= r ; c3++)
    for(int c4 = l ; c4 <= r ; c4++)
    for(int c5 = l ; c5 <= r ; c5++)
    for(int c6 = l ; c6 <= r ; c6++)
    for(int c7 = l ; c7 <= r ; c7++)
    for(int c8 = l ; c8 <= r ; c8++)
    for(int c9 = l ; c9 <= r ; c9++)

        if((c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9)%3==0)
            cnt++;
    cout << cnt ;

}