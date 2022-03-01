#include<bits/stdc++.h>

using namespace std;

int firstpos(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int lastpos(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

void TC(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(firstpos(a, n, x) == - 1){
		cout << -1 << endl;
		return;
	}
	cout << lastpos(a, n, x) - firstpos(a, n, x) + 1;
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
