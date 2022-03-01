#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	for(int i = 1; i < n; i++){
		b[i] += b[i - 1];
	}
	int ok = 0;
	for(int i = 1; i < n - 1; i++){
		if(b[i - 1] == (b[n - 1] - b[i])){
			cout << i + 1 << endl;
			ok = 1;
			return;
		}
	}
	if(ok == 0){
		cout << -1 << endl;
	}
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
