#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;

long long powmod(long long a, long long b){
	if(b == 0) return 1;
	long long tmp = powmod(a, b/2);
	if(b % 2){
		return (((tmp * tmp) % m) * a) % m;
	}
	return (tmp * tmp) % m;
}

long long nguoc1(long long n){
	long long res = 0;
	while(n > 0){
		int d = n % 10;
		res = res * 10 + d;
		n /= 10;
	}
	return res;
}

void TC(){
	long long n;
	cin >> n;
	long long r = nguoc1(n);
	cout << powmod(n, r) << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
