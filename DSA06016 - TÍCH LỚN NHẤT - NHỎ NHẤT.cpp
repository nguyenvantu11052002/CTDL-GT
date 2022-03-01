#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);
	cout << (long long) a[n - 1] * b[0] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
