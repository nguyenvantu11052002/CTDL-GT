#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int dp[n]; // dp[i] : tong lon nhat cua day con khi xet toi vi tri i;
	for(int i = 0; i < n; i++){
		dp[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){ // co the chen duoc a[i] vao day so dang xet toi vi tri j;
				dp[i] = max(dp[i], dp[j] + a[i]);
			}
		}
	}
	cout << *max_element(dp, dp + n) << endl;
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
	



