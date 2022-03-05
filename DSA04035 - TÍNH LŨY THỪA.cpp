#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;

long long powmod(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	long long x = powmod(a, b/2);
	if(b % 2){
		return (((x * x) % m) * a) % m;
	}
	return (x * x) % m;
}

int main(){
	int t = 1;
	//cin >> t;
	while(1){
		long long a, b;
		cin >> a >> b;
		if(a == 0 && b == 0){
			return 0;
		}
		cout << powmod(a, b) << endl;
	}
	return 0;
}

