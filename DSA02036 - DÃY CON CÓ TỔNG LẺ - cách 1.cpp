#include<bits/stdc++.h>
 
using namespace std;

int n, b[20], x[20];
vector<vector<int> > res;

void solve(){
	vector<int> a;
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(x[i]){
			sum += b[i];
		}
	}
	if(sum % 2){
		for(int i = 1; i <= n; i++){
			if(x[i]){
				a.push_back(b[i]);
			}
		}
	}
	if(a.size() != 0){
		res.push_back(a);
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			solve();
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	sort(b + 1, b + n + 1, greater<int> ());
	memset(x, 0, sizeof(x));
	Try(1);
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	res.clear();
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}


