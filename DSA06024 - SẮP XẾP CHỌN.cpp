#include<bits/stdc++.h>

using namespace std;

void timnnvadoicho(int a[], int x, int n){
	int tmp = x;
	for(int i = x + 1; i < n; i++){
		if(a[tmp] > a[i]) tmp = i;
	}
	swap(a[x], a[tmp]);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		cout << "Buoc " << i + 1 << ": ";
		timnnvadoicho(a, i, n);
	}
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
