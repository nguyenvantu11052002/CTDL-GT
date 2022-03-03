#include<bits/stdc++.h>
 
using namespace std;

int bnr(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			return m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return 0;
}

void TC(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int res = bnr(a, n, k);
	if(res) cout << res;
	else cout << "NO";
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
