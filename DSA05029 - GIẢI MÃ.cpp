#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	string s;
	cin >> s;
	if(s[0] == '0'){
		cout << 0 << endl;
		return;
	}
	int n = s.size();
	s = " " + s;
	int dp[n + 5]; // dp[i] : so cach giai ma lon nhat khi xet toi vi tri i;
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		if(s[i] == '0'){
			if(s[i - 1] != '1' && s[i - 1] != '2'){
				cout << 0 << endl;
				return;
			}
			else{
				dp[i] = dp[i - 2];  
			}
		}
		else{
			// neu s[i] khong ghep duoc voi s[i - 1];
			dp[i] = dp[i - 1];
			// con neu ghep duoc thi bao gom TH k ghep duoc nhu tren va sau day la TH ghep dc;
			// s[i - 1] == '0' thi day la TH k ghep duoc;
			if(s[i - 1] == '1' || s[i - 1] == '2' && s[i] <= '6'){// TH ghep duoc s[i] va s[i -1];
				dp[i] += dp[i - 2];
			}
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
	



