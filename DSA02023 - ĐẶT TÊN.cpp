#include<bits/stdc++.h>
 
using namespace std;

int x[35];
int n, k;

vector<string> a;

void ktao(){
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}

void inkq(){
	for(int i = 1; i <= k; i++){
		cout << a[x[i] - 1] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			inkq();
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n >> k;
	ktao();
	string s[n + 5];
	set<string> se;
	for(int i = 1; i <= n; i++){
		cin >> s[i];
		se.insert(s[i]);
	}
	vector<string> b(se.begin(), se.end());
	n = b.size();
	a = b;
	Try(1);
}
 
int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

