#include<bits/stdc++.h>
 
using namespace std;

void solve (int a[], int l, int r) {
	if (l > r) return;
	int m = (l + r) / 2;
	cout << a[m] << " ";
	solve (a, l, m - 1);
	solve (a, m + 1, r);
}

void TC () {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	solve (a, 0, n - 1);
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
