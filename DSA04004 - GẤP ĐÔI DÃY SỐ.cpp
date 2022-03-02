#include<bits/stdc++.h>
 
using namespace std;

long long mul(long long a, long long b){
	if(b == 0) return 0;
	if(b == 1) return a;
	long long tmp = mul(a, b/2);
	if(b % 2) return 2 * tmp + a;
	return 2 * tmp;
}

long long powmod(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	long long tmp = powmod(a, b/2);
	if(b % 2) return mul(tmp, tmp) * a;
	return mul(tmp, tmp);
}

void TC(){
	long long n, k;
	cin >> n >> k;
	long long len = powmod(2, n)/2; // phan tu giua;
	while(1){
		if(n == 1){		// 					||			||          ||
			cout << 1 << endl; // [1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1].
			return;
		}
		if(k == len){
			cout << n << endl;
			return;
		}
		if(k > len){
			k = len - (k - len);
		}
		len /= 2;
		n--;
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

