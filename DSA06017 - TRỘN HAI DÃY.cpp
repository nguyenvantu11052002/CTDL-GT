#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	multiset<int> se;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
		se.insert(b[i]);
	}
	for(auto x : se){
		cout << x << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
