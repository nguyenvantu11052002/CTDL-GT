#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){ // 0  2  3  6  6 6 7 9 
		if(a[i] + 1 != a[i + 1] && a[i] != a[i + 1]) cnt = cnt + (a[i + 1] - a[i] - 1);
	}
	cout << cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
