#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	string s;
	cin >> s;
	string res = "";
	res += s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i] != s[i - 1]) res += "1";
		else res += "0";
	}
	cout << res << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

