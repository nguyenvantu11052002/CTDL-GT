#include<bits/stdc++.h>
 
using namespace std;

int n, k, m = 1e9 + 7;
long long dp[1001][1001]; // dp[i][j] to hop chap j cua i;

void TC(){
	cin >> n >> k;
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(i == j || j == 0){
				dp[i][j] = 1;
			}
			else{
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
				dp[i][j] %= m;
			}
		}
	}
	cout << dp[n][k] << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



