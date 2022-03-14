#include<bits/stdc++.h>
 
using namespace std;

int dp[1001][1001]; // dp[i][j] : do dai xau con chung lon nhat tinh toi vi tri i trong a va vi tri j trong b;

void TC(){
	string a, b;
	cin >> a >> b;
	int n = a.size();
	int m = b.size();
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i - 1] == b[j - 1]){ // them 1 ki tu giong nhau nua;
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[n][m] << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



