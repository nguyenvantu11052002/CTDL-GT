#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	int dp[n + 5]; // dp[i] : thoi gian it nhat de tao thanh so i;
	memset(dp, 0, sizeof(dp));
	dp[1] = x;
	for(int i = 2; i <= n; i++){
		if(i % 2){
			dp[i] = min(dp[i - 1] + x, dp[i/2 + 1] + z + y);
		}
		else dp[i] = min(dp[i - 1] + x, dp[i/2] + z);
	}
	cout << dp[n] << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
