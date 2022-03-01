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
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] + a[j] == k) cnt++;
		}
	}
	cout << cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
