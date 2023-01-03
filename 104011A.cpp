#include <bits/stdc++.h>
#define ll long long
using namespace std;

void res(string a , string b , int x , int y){
	if(a == "BC"){
		if(b == "BC"){
			cout << abs(x - y );
		}else {
			cout << abs((x - 1) + y);
		}
	}	else{
		if(b == "BC"){
			cout << abs((y-1) + x) ;
		}else{
			cout << abs(x - y) ;
		}
	}
}

void solve(){
	string s1 , s2 ; 
	getline(cin , s1) ; 
	getline(cin , s2);
	string a = "", b= "" ; int x =0 , y= 0 ;
	if(s1[0] == 'A' || s1[0] == 'B'){
		int i ;
		for(i = 0 ; i < s1.length() ; i++){
			if(s1[i] != ' ') a += s1[i];
			else break;
		}
		string temp = "";
		i++;
		for(; i < s1.length() ; i++) temp += s1[i];
		x = stoi(temp);
	}else{
		string temp = "";
		int i ;
		for(i = 0 ; i < s1.length() ; i++){
			if(s1[i] != ' ') temp += s1[i];
			else break;
		}
		i++;
		x = stoi(temp);
		for(; i < s1.length() ; i++) a += s1[i];
		
	}
	if(s2[0] == 'A' || s2[0] == 'B'){
		// cout << s2 ;
		int i ;
		for(i = 0 ; i < s2.length() ; i++){
			if(s2[i] != ' ') b += s2[i];
			else break;
		}
		string temp = "";
		i++;
		for(; i < s2.length() ; i++) temp += s2[i];
		y = stoi(temp);
	}else{
		string temp = "";
		int i ;
		for(i = 0 ; i < s2.length() ; i++){
			if(s2[i] != ' ') temp += s2[i];
			else break;
		}
		i++;
		y = stoi(temp);
		for(; i < s2.length() ; i++) b += s2[i];
	}
	res(a , b, x , y);
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  