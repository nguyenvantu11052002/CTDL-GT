#include<bits/stdc++.h>

using namespace std;
int n, x;
int binary(int a[], int n, int l, int r){
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			return m;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

void TC(){
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int chiso = 0;
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1]){
			chiso = i;
			break;
		}
	}
	if(binary(a, n, 0, chiso) != -1) cout << binary(a, n, 0, chiso) + 1;
	if(binary(a, n, chiso + 1, n - 1) != -1) cout << binary(a, n, chiso + 1, n - 1) + 1;
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
