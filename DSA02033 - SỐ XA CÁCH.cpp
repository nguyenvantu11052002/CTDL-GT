#include<bits/stdc++.h>
 
using namespace std;

int x[15], cx[15];
int n;
vector<string> v;

void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = i;
	}
}

bool check(){
	for(int i = 1; i <= n - 1; i++){
		if(abs(x[i] - x[i + 1]) == 1) return false;
	}
	return true;
}

void solve(){
	string s = "";
	for(int i = 1; i <= n; i++){
		s += to_string(x[i]);
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
	cin >> n;
	ktao();
	memset(cx, 0, sizeof(cx));
	Try(1);
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << endl;
	}
	cout << endl;
	v.clear();
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	


