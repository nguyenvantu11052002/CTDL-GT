#include<bits/stdc++.h>
 
using namespace std;

int m = 1e9 + 7;

void TC(){
	int n, k;
	cin >> n >> k;
	long long res = 1;
	for(int i = n; i >= n - k + 1; i--){
		res *= i;
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



