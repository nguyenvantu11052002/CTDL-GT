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
	int ok = 1;
	for(int i = 0; i < n - 1; i++){
		if(a[i] != a[i + 1]){
			ok = 0;
			break;
		}
	}
	if(ok){
		cout << -1 << endl;
		return;
	}
	cout << a[0] << " ";
	for(int i = 1; i < n; i++){
		if(a[i] != a[0]){
			cout << a[i] << endl;
			break;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
