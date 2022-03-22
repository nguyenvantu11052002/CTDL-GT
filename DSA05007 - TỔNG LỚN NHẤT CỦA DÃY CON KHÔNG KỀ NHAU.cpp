#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int dp[n]; // dp[i] : tong day con lon nhat khong co 2 phan tu nao sat nhau tinh toi vi tri i;
	dp[0] = a[0];
	dp[1] = max(a[0], a[1]);
	for(int i = 2; i < n; i++){
		dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
	}
	cout << dp[n - 1] << endl;
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
	



