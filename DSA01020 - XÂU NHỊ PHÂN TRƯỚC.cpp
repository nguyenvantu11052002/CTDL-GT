#include<bits/stdc++.h>
 
using namespace std;

int ok, a[105], b[105], n, k;  // 1011
                               // 1100

void sinh(string s){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '0'){
		s[i] = '1';
		i--;
	}
	if(i == -1){
		for(int i = 0; i < s.size(); i++){
			cout << "1";
		}
		cout << endl;
	}
	else{
		s[i] = '0';
		cout << s << endl;
	}
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
