#include<bits/stdc++.h>
 
using namespace std;
long long G[93];
/* 			G(n - 2) :  x (x la toa do cua ky tu can tim trong G(n-2) || x = k; n -= 2;
	G(n) : 
			G(n - 1) :  y (y la toa do cua ky tu can tim trong G(n-1) || length(G(n-2)) + y = k; 
*/
void TC(){
	long long n, k;
	cin >> n >> k;
	while(n > 2){
		if(k <= G[n - 2]){
			n -= 2;
		}
		else{
			k -= G[n - 2];
			n -= 1;
		}
	}
	if(n == 1) cout << "A" << endl;
	else cout << "B" << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	// array G[] is length of string G;
	G[1] = 1, G[2] = 1;
	for(int i = 3; i <= 92; i++){
		G[i] = G[i - 2] + G[i - 1];
	}
	while(t--){
		TC();
	}
	return 0;
}
