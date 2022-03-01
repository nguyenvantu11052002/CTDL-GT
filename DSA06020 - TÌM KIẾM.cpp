#include<bits/stdc++.h>

using namespace std;

bool BinarySearch(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			return true;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return false;
}

void TC(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	if(BinarySearch(a, n, x)) cout << 1;
	else cout << -1;
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
