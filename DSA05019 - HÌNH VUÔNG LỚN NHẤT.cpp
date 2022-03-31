#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n, m;
	cin >> n >> m;
	int a[n + 5][m + 5];
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j]){
				a[i][j] = min(a[i - 1][j], min(a[i][j - 1], a[i - 1][j - 1])) + 1;
			}
		}
	}
	int res = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] > res) res = a[i][j];
		}
	}
	cout << res << endl;
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
