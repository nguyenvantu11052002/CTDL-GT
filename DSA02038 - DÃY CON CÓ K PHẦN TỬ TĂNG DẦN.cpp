#include<bits/stdc++.h>
 
using namespace std;
int n, k, a[20], x[20];

void solve(){
	for(int i = 1; i <= k; i++){
		cout << a[x[i]] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			solve();
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	memset(x, 0, sizeof(x));
	Try(1);
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



