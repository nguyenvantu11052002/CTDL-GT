#include<bits/stdc++.h>
 
using namespace std;

int x[10];
vector<string> res;

void solve(){
	string s = "";
	for(int i = 1; i <= 8; i++){
		if(x[i]){
			s += "2";
		}
		else s += "0";
		if(i == 2 || i == 4){
			s += "/";
		}
	}
	if(s[4] != '0' && s[6] != '0' && s[3] == '0'){
		if(s[0] == '0' && s[1] == '2' || s[0] == '2' && s[1] == '0' || s[0] == '2' && s[1] == '2'){
			res.push_back(s);
		}
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == 8){
			solve();
		}
		else Try(i + 1);
	}
}

void TC(){
	Try(1);
	sort(res.begin(), res.end());
	for(auto x : res){
		cout << x << endl;
	}
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	


