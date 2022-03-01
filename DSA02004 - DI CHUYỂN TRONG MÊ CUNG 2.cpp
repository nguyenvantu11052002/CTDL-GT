#include<bits/stdc++.h>
 
using namespace std;

int n, a[15][15], cx[15][15], ok;

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
char dich[4] = {'D', 'L', 'R', 'U'};

vector<string> res;
void Try(int i, int j, string s){
	if(a[1][1] == 0){
		return;
	}
	if(i == n && j == n){
		ok = 1;
		res.push_back(s);
		return;
	}
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1 && cx[i][j] == 0){
			s += dich[k];
			cx[i][j] = 1;
			Try(i1, j1, s);
			cx[i][j] = 0;
			s.pop_back();
		}
	}
}

void TC(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	memset(cx, 0, sizeof(cx));
	ok = 0;
	Try(1, 1, "");
	if(ok == 0){
		cout << -1 << endl;
	}
	else{
		sort(res.begin(), res.end());
		for(auto x : res){
			cout << x << " ";
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
	


