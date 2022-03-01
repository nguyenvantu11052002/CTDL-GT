#include<bits/stdc++.h>

using namespace std;

void timnnvadoicho(int a[], int x, int n){
	int tmp = x;
	for(int i = x + 1; i < n; i++){
		if(a[tmp] > a[i]) tmp = i;
	}
	swap(a[x], a[tmp]);
}

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<string> v;
	for(int i = 0; i < n - 1; i++){
		string s = "Buoc " + to_string(i + 1) + ": ";
		timnnvadoicho(a, i, n);
		for(int i = 0; i < n; i++){
			s += to_string(a[i]) + " ";
		}
		v.push_back(s);
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << endl;
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

