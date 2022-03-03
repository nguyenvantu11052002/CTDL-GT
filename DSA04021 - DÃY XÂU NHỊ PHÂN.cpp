#include<bits/stdc++.h>
 
using namespace std;
long long G[93];

void TC(){
	long long n, k;
	cin >> n >> k;
	while(n > 2){
		if(k <= G[n - 2]){
			n -= 2;
		}
		else{
			// G[n - 2] + y = k;
			k -= G[n - 2];
			n -= 1;
		}
	}
	if(n == 1) cout << 0 << endl;
	else cout << 1 << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	G[1] = 1, G[2] = 1;
	for(int i = 3; i <= 92; i++){
		G[i] = G[i - 2] + G[i - 1];
	}
	while(t--){
		TC();
	}
	return 0;
}
