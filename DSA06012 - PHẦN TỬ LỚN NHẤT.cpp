#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, greater<int> ());
	int i = 0;
	while(k--){
		cout << a[i++] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
