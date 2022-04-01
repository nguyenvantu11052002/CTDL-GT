#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n, m, k;
	cin >> n >> m >> k;
	string a, b, c;
	cin >> a >> b >> c;
	a = " " + a;
	b = " " + b;
	c = " " + c;
	int dp[n + 5][m + 5][k + 5];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			for(int l = 1; l <= k; l++){
				if(a[i] == b[j] && a[i] == c[l]){
					dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
				}
				else{
					dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j - 1][l], dp[i][j][l - 1]));
				}
			}
		}
	}
	cout << dp[n][m][k] << endl;
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
