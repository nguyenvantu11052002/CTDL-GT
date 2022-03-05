#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;
long long F[2][2], M[2][2];

void nhan(long long A[2][2], long long B[2][2]){
	long long res[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			res[i][j] = 0;
			for(int k = 0; k < 2; k++){
				res[i][j] += A[i][k] * B[k][j];
				res[i][j] %= m;
			}
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			A[i][j] = res[i][j];
		}
	}
}

void powmod(long long n){
	if(n == 1) return;
	powmod(n/2);
	nhan(F, F);
	if(n % 2){
		nhan(F, M);
	}
}
	
void TC(){
	long long n;
	cin >> n;
	if(n == 0){
		cout << 0 << endl;
		return;
	}
	F[0][0] = F[0][1] = F[1][0] = 1;
	F[1][1] = 0;
	M[0][0] = M[0][1] = M[1][0] = 1;
	M[1][1] = 0;
	powmod(n - 1);
	cout << F[0][0] << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

