#include<bits/stdc++.h>
 
using namespace std;

int ok;

void sinh(string s){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		i--;
	}
	if(i != -1){
		s[i] = '1';
	}
	cout << s << endl;
}

void inraketqua(){
	string s;
	cin >> s;
	sinh(s);
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
