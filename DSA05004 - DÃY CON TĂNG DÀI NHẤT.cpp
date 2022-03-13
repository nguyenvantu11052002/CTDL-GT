#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n + 5];
	int dp[n + 5]; // dp[i] : do dai day con tang dai nhat khi xet toi vi tri thu i;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		dp[i] = 1; // chi tinh 1 minh so a[i] thi do dai toi thieu cua no luc nao cung >= 1;
		for(int j = 1; j < i; j++){ // cac day dang truoc i, xet xem co chen duoc a[i] vao day do hay khong ? neu chen duoc thi do dai cua day xet toi vi tri i co the la dp[j] + 1;
			if(a[i] > a[j]){ // co the chen a[i] vao day so xet toi j;
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}	
	}
	int res = *max_element(dp + 1, dp + n + 1);
	cout << res << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



