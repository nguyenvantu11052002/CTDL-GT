#include<bits/stdc++.h>

using namespace std;

int m = 1e9 + 7;

void TC(){
	int n, k;
	cin >> n >> k;
	long long F[n + 5];
	memset(F, 0, sizeof(F));
	F[0] = F[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= min(i, k); j++){
			F[i] += F[i - j];
			F[i] %= m;
		}
	}
	cout << F[n] << endl;
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
