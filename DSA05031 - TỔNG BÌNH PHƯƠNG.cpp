#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	int dp[n + 5]; // dp[i] : so luong it nhat cac so nho hon n ma tong binh phuong bang n;
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		dp[i] = i; // 1^2 + 1^2 + .......... + 1^2;
		for(int j = 1; j <= sqrt(i); j++){
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
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
