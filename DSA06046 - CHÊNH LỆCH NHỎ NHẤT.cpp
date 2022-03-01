#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int res = INT_MAX;
	for(int i = 0; i < n - 1; i++){
		if(a[i + 1] - a[i] < res) res = a[i + 1] - a[i];
	}
	cout << res << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
