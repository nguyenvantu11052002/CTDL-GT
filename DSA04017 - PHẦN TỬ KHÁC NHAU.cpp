#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	long long n;
	cin >> n;
	long long a[n], b[n - 1], res, sum = INT_MAX;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int j = 0; j < n - 1; j++){
		cin >> b[j];
	}
	for(int i = 0; i < n - 1; i++){
		if(a[i] != b[i]){
			cout << i + 1 << endl;
			return;
		}
	}
	cout << n << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

