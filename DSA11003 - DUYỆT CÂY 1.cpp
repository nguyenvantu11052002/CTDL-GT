#include<bits/stdc++.h>
 
using namespace std;

int search (int in[], int val, int n) {
	for (int i = 0; i < n; i++) {
		if (in[i] == val) return i;
	}
	return -1;
}

void solve (int in[], int pre[], int n) {
	int x = search(in, pre[0], n);
	if (x != 0) {
		solve (in, pre + 1, x);
	}
	if (x != n - 1) {
		solve (in + x + 1, pre + x + 1, n - x - 1);
	}
	cout << pre[0] << " ";
}

void TC(){
	int n;
	cin >> n;
	int pre[n], in[n];
	for (int i = 0; i < n; i++) {
		cin >> in[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> pre[i];
	}
	solve (in, pre, n);
	cout << endl;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
