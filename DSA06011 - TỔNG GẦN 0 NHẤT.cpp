#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int res = INT_MAX;
	int ans = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(abs(a[i] + a[j]) < res){
				res = abs(a[i] + a[j]);
				ans = a[i] + a[j];
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
