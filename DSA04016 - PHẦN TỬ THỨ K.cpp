#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	int i = 0, j = 0;
	int res = 0;
	while(k--){
		if(i == n - 1){
			res = b[j++];
		}
		if(j == m - 1){
			res = a[i++];
		}
		if(a[i] < b[j]){
			res = a[i++];
		}
		else res = b[j++];
	}
	cout << res << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

