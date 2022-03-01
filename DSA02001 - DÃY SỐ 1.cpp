#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "[";
	for(int i = 0; i < n; i++){
		cout << a[i];
		if(i != n - 1) cout << " ";
	}
	cout << "]" << endl;
	int stop = n - 1;
	while(stop--){
		cout << "[";
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i] + a[i + 1];
		}
		for(int i = 0; i < n - 1; i++){
			cout << a[i];
			if(i != n - 2) cout << " ";
		}
		cout << "]" << endl;
		n--;
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

