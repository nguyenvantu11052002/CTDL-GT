#include<bits/stdc++.h>
 
using namespace std;

int dp[101][25001], a[101]; // dp[i][j] khoi luong lon nhat cho duoc khi xet toi con bo thu i va so kg con co the cho them la j;

void TC(){
	int n, w;
	cin >> w >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= w; j++){
			if(a[i] > j){ // khong the cho them con bo nay;
				dp[i][j] = dp[i - 1][j];
			}
			else{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + a[i]);
			}
		}
	}
	cout << dp[n][w] << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}


