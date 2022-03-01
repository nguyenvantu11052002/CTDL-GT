#include<bits/stdc++.h>

using namespace std;

set<int> se;

void tachroithem(int x){
	while(x > 0){
		int d = x % 10;
		x /= 10;
		se.insert(d);
	}
}

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		tachroithem(a[i]);
	}
	for(auto x : se){
		cout << x << " ";
	}
	cout << endl;
	se.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
