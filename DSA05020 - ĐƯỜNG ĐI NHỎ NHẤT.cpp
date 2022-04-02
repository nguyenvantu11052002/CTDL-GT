#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int dp[n][m]; // dp[i][j] : diem so nho nhat khi di chuyen tu o 1 1 toi o i j;
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0 && j == 0){
				dp[i][j] = a[i][j];
			}
			else if(i == 0){
				dp[i][j] = a[i][j] + dp[i][j - 1];
			}
			else if(j == 0){
				dp[i][j] = a[i][j] + dp[i - 1][j];
			}
			else{
				dp[i][j] = a[i][j] + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
			}
		}
	}
	cout << dp[n - 1][m - 1] << endl;
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
