#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;

long long st1(int a[], int n){
	long long res = 0;
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			res = res * 10 + a[i];
		}
	}
	return res;
}

long long st2(int a[], int n){
	long long res = 0;
	for(int i = 0; i < n; i++){
		if(i % 2){
			res = res * 10 + a[i];
		}
	}
	return res;
}

void TC(){
	int n, k;
	cin >> n >> k;
	k = min(n - k, k);
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long res1 = 0, res2 = 0;
	for(int i = 0; i < k; i++){
		res1 += a[i];
	}
	for(int i = k; i < n; i++){
		res2 += a[i];
	}
	cout << abs(res1 - res2) << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
