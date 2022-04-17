#include<bits/stdc++.h>

using namespace std;
int m, n, res;
string s[10];
bool vs[10];
int x[10];

void solve(){
	vector<int> a;
	for(int i = 1; i <= m; i++){
		int res1 = 0;
		for(int j = 1; j <= n; j++){
			res1 = res1 * 10 + (s[i][x[j]] + '0');
		}
		a.push_back(res1);
	}
	sort(a.begin(), a.end());
	res = min(res, a[a.size() - 1] - a[0]);
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(vs[j] == false){
			vs[j] = true;
			x[i] = j;
			if(i == n){
				solve();
			}
			else Try(i + 1);
			vs[j] = false;
		}
	}
}

void TC(){	
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		cin >> s[i];
		s[i] = " " + s[i];
	}
	memset(vs, false, sizeof(vs));
	res = INT_MAX;
	Try(1);
	cout << res << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
 
