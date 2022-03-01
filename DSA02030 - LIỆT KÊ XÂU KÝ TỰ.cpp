#include<bits/stdc++.h>
 
using namespace std;

int n, k;
char c;
vector<string> v;
vector<int> a;

void solve(){
	string s = "";
	for(int i = 0; i < a.size(); i++){
		s += (char)('A' + a[i] - 1);
	}
	v.push_back(s);
}

void Try(int i){
	for(int j = i; j <= n; j++){
		a.push_back(j);
		if(a.size() == k){
			solve();
		}
		else Try(j);
		a.pop_back();
	}
}

void TC(){
	cin >> c >> k;
	n = c - 'A' + 1;
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
	



