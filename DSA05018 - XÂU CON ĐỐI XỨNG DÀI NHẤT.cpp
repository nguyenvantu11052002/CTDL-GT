#include<bits/stdc++.h>
 
using namespace std;

string s; //a b c b a 

void TC(){
	cin >> s;
	int n = s.size();
	int dp[n][n]; // dp[i][j] : ktra xau bat dau tu vi tri j toi vi tri i co la xau doi xung hay khong;
	for(int i = 0; i < n; i++){
		dp[i][i] = 1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			// 2 ki tu sat nhau tranh i + 1 lon hon j - 1;
			if(s[i] == s[j] && j + 1 == i){
				dp[i][j] = 1;
				continue;
			}
			//
			if(s[i] == s[j]){
				dp[i][j] = dp[i - 1][j + 1];
			}
			else{
				dp[i][j] = 0;
			}
		}
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(dp[i][j]){
				if(res < i - j + 1){
					res = i - j + 1;
				}
			}
		}
	}
	cout << res << endl;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--){
		TC();
	}
	return 0;
}
	





