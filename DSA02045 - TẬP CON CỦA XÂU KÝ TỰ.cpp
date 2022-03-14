#include<bits/stdc++.h>
 
using namespace std;

int n;
string s;
vector<string> v;

void Try(int i, string ss){
	for(int j = i + 1; j < n; j++){
		ss += s[j];
		if(ss.size() <= n){
			v.push_back(ss);
		}
		if(ss.size() < n){
			Try(j, ss);
		}
		ss.pop_back();
	}
}

void TC(){
	cin >> n >> s;
	Try(-1, "");
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << " ";
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



