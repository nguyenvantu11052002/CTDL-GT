#include<bits/stdc++.h>
 
using namespace std;
const long long m = 123456789;

long long powmod(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	long long tmp = powmod(a, b/2);
	if(b % 2){
		return (((tmp * tmp) % m) * a) % m;
	}
	return (tmp * tmp) % m;
}

void TC(){
	long long n;
	cin >> n;
	cout << powmod(2, n - 1) << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
