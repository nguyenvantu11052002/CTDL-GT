
#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;
long long n, f, a[15][15], ans[15][15];
 
void nhan(long long A[15][15], long long B[15][15]){
	long long res[15][15];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			res[i][j] = 0;
			for(int k = 0; k < n; k++){
				res[i][j] += (A[i][k] * B[k][j]) % m;
				res[i][j] %= m;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			A[i][j] = res[i][j];
		}
	}
}
 
void Powmod(long long t){
	if(t <= 1) return;
	Powmod(t/2);
	nhan(ans, ans);
	if(t % 2){
		nhan(ans, a);
	}
}
 
void TC(){
	cin >> n >> f;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			ans[i][j] = a[i][j];
		}
	}
	Powmod(f);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
