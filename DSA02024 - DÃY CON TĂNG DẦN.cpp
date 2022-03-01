#include<bits/stdc++.h>
 
using namespace std;
int n, a[25];
vector<int> x;
vector<vector<int> > ans;
void Try(int i){
	for(int j = i + 1; j <= n; j++){
		if(a[j] > a[i]){
			x.push_back(a[j]);
			if(x.size() > 1){
				ans.push_back(x);
			}
			Try(j);
			x.pop_back();
		}
	}
}

void TC(){
	cin >> n;
	a[0] = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	Try(0);
	vector<string> v;
	for(int i = 0; i < ans.size(); i++){
		string s = "";
		for(int j = 0; j < ans[i].size(); j++){
			s += to_string(ans[i][j]) + " ";
		}
		v.push_back(s);
	}
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
	

