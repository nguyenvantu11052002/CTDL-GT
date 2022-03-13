#include<bits/stdc++.h>
 
using namespace std;
long long n, k, a[15][15], ans[15][15];
long long m = 1e9 + 7;

struct matran{
	long long x[15][15];
};

matran operator*(matran a, matran b){
	matran c;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			c.x[i][j] = 0;
			for(int h = 0; h < n; h++){
				c.x[i][j] += (a.x[i][h] * b.x[h][j]) % m;
				c.x[i][j] %= m;
			}
		}
	}
	return c;
}

matran powmod(matran a, long long k){
	if(k == 1) return a;
	matran x = powmod(a, k/2);
	if(k % 2){
		return x * x * a;
	}
	return x * x;
}

void TC(){
	cin >> n >> k;
	matran a;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a.x[i][j];
		}
	}
	matran ans = powmod(a, k);
	long long res = 0;
	for(int i = 0; i < n; i++){
		res += ans.x[i][n - 1];
		res %= m;
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



