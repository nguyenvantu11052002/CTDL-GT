#include<bits/stdc++.h>
 
using namespace std;

int n, m = 1e9 + 7;

struct matran{
	long long x[2][2];
};

matran operator*(matran a, matran b){
	matran c;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			c.x[i][j] = 0;
			for(int k = 0; k < 2; k++){
				c.x[i][j] += (a.x[i][k] * b.x[k][j]) % m;
				c.x[i][j] %= m;
			}
		}
	}
	return c;
}

matran powmod(matran a, int k){
	if(k == 1) return a;
	matran x = powmod(a, k/2);
	if(k % 2) return x * x * a;
	return x * x;
}

void TC(){
	cin >> n;
	matran a;
	a.x[0][0] = a.x[0][1] = a.x[1][0] = 1;
	a.x[1][1] = 0;
	matran ans = powmod(a, n - 1);
	cout << ans.x[0][0] << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



