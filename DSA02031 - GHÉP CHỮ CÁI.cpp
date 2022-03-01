#include<bits/stdc++.h>
 
using namespace std;
int n, k, x[20], cx[20];
string ss;
vector<string> v;

bool check(){
	for(int i = 2; i <= n - 1; i++){
		if(x[i] == 1){
			if(x[i - 1] != 5 && x[i + 1] != 5) return false;
		}
		if(x[i] == 5){
			if(x[i - 1] != 1 && x[i + 1] != 1) return false;
		}
	}
	return true;
}

void solve(){
	string s = "";
	for(int i = 1; i <= n; i++){
		s += (char)('A' + x[i] - 1);
	}
	v.push_back(s);
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cx[j] == 0){
			cx[j] = 1;
			x[i] = j;
			if(i == n){
				if(check()){
					solve();
				}
			}
			else Try(i + 1);
			cx[j] = 0;
		}
	}
}

void TC(){
	char c;
	cin >> c;
	n = c - 'A' + 1;
	memset(cx, 0, sizeof(cx));
	ss = "TABCDEFGH";
	Try(1);
	sort(v.begin(), v.end());
	for(auto x : v){
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
	


