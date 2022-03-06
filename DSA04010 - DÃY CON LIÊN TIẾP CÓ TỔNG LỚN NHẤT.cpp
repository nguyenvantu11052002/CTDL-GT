#include<bits/stdc++.h>
 
using namespace std;

int solve(int a[], int n){
	int res = 0, sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
		if(sum < 0) sum = 0;
		res = max(res, sum);
	}
	return res;
}

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << solve(a, n) << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
