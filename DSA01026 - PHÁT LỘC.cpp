#include<bits/stdc++.h>
 
using namespace std;

int n, a[25];

vector<string> v;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

bool check(){ // 0 - 6, 1 - 8;
	if(a[1] == 0) return false;
	if(a[n] == 1) return false;
	for(int i = 1; i <= n - 1; i++){
		if(a[i] == 1 && a[i + 1] == 1) return false;
	} 
	for(int i = 1; i <= n - 3; i++){
		if(a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0) return false;
	}
	return true;
}

void solve(){
	string s = "";
	for(int i = 1; i <= n; i++){
		if(a[i]) s += "8";
		else s += "6";
	}
	v.push_back(s);
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			if(check()){
				solve();
			}
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n;
	ktao();
	Try(1);
	sort(v.begin(), v.end());
	//cout << v.size() << endl;
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

	

	
