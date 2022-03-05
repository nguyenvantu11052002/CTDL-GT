#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;

long long f[100005];

void TC(){
	int n, k;
	cin >> n >> k;
	long long sum = 0;
	for(int i = 1; i <= k; i++){
		f[i] = sum + 1;
		f[i] %= m;
		sum += f[i];
		sum %= m;
	}
	for(int i = k + 1; i <= n; i++){
		f[i] = 0;
		for(int j = i - k; j <= i - 1; j++){
			f[i] += f[j];
			f[i] %= m;
		}
	}
	cout << f[n] << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

