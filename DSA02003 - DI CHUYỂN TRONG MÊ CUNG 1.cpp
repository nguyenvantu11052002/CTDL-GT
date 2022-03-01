#include<bits/stdc++.h>
 
using namespace std;
int n;
int a[15][15];
int check;
vector<string> res;

void Try(int i, int j, string s){
	if(i == 1 && j == 1 && a[i][j] == 0){
		return;
	}
	if(i == n && j == n && a[i][j] == 1){
		res.push_back(s);
		check = 1;
		return;
	}
	if(i < n && j <= n && a[i + 1][j] == 1){
		s += "D";
		Try(i + 1, j, s);
		s.pop_back();
	}
	if(i <= n && j < n && a[i][j + 1] == 1){
		s += "R";
		Try(i, j + 1, s);
		s.pop_back();
	}
	if(i > n || j > n || a[i + 1][j] == 0 && a[i][j + 1] == 0){
		return;
	}
}

void TC(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	check = 0;
	Try(1, 1, "");
	if(check == 0){
		cout << -1;
	}
	else{
		sort(res.begin(), res.end());
		for(auto x : res){
			cout << x << " ";
		}
	}
	res.clear();
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

