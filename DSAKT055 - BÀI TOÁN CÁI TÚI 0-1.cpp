#include<bits/stdc++.h>

using namespace std;

int n, V, w[1001], v[1001];
int dp[1001][1001]; // dp[i][j] : gia tri lon nhat lay duoc khi xet toi do vat thu i va khoi luong con lai la j;

void TC(){
	cin >> n >> V;
	for(int i = 1; i <= n; i++){
		cin >> w[i];
	}
	for(int j = 1; j <= n; j++){
		cin >> v[j];
	}
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= V; j++){
			if(j < w[i]){ // khong the lay them do vat thu i;
				dp[i][j] = dp[i - 1][j];
			}
			else{ // co the lay them do vat thu i;
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[n][V] << endl;
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
