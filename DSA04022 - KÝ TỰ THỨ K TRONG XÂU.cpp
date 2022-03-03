#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	long long n, k;
	cin >> n >> k;
	long long len = pow(2, n)/2; // phan tu chinh giua;
	while(1){
		if(n == 1){
			cout << "A" << endl;
			return;
		}
		if(k == len){
			cout << (char)('A' + n - 1) << endl;
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
