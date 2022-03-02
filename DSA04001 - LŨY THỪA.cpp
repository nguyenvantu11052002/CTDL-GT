#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;

long long mul(long long a, long long b){
	if(b == 0) return 0;
	if(b == 1) return a;
	long long tmp = mul(a, b/2);
	if(b % 2) return (2 * tmp + a) % m;
	return (2 * tmp) % m;
}

long long powmod(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	long long tmp = powmod(a, b/2);
	if(b % 2) return (mul(tmp, tmp) * a) % m;
	return mul(tmp, tmp) % m;
}

void TC(){
	long long n, k;
	cin >> n >> k;
	cout << powmod(n, k) << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
