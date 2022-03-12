#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;
long long n, k, x[15][15];

struct MaTran{
	long long x[15][15];
};

MaTran operator*(MaTran A, MaTran B){
	MaTran C;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			C.x[i][j] = 0;
			for(int l = 0; l < n; l++){
				C.x[i][j] = ( C.x[i][j] + (A.x[i][l] * B.x[l][j]) % m) % m; 
			}
		}
	}
	return C;
}

MaTran Powmod(MaTran a, int k){
	if(k == 1) return a;
	MaTran x = Powmod(a, k/2);
	if(k % 2) return x * x * a;
	return x * x;
}

void TC(){
	cin >> n >> k;
	MaTran a;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a.x[i][j];
		}
	}
	MaTran C = Powmod(a, k);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << C.x[i][j] << " ";
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



