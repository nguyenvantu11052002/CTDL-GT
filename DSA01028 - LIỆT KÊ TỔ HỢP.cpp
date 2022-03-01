#include<bits/stdc++.h>
 
using namespace std;

int n, b[25], k, x[25];
set<int> se;
vector<int> a;

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
	for(int j = x[i - 1] + 1; j <= a.size() - k + i; j++){
		x[i] = j;
		if(i == k){
			inkq();
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	vector<int> tmp(se.begin(), se.end());
	a = tmp;
	ktao();
	Try(1);
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

	

	
