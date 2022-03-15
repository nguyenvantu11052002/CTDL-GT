#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int j = 0; j < m; j++){
		cin >> b[j];
	}
	int res[n + m - 1] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			res[i + j] += (a[i] * b[j]);
		}
	}
	for(int i = 0; i < n + m - 1; i++){
		cout << res[i] << " ";
	}
	cout << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



