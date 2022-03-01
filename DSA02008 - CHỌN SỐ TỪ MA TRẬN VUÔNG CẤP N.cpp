#include<bits/stdc++.h>
 
using namespace std;
int n, k, ok, cnt, a[25];
int b[25][25];
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}	
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += b[i][a[i]];
	}
	return sum == k;
}

void TC(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> b[i][j];
		}
	}
	ktao();
	ok = 1;
	cnt = 0;
	vector<string> v;
	while(ok){
		if(check()){
			cnt++;
			string s = "" + to_string(a[1]);
			for(int i = 2; i <= n; i++){
				s += " " + to_string(a[i]);
			}
			v.push_back(s);
		}
		sinh();
	}
	sort(v.begin(), v.end());
	cout << cnt << endl;
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
	


