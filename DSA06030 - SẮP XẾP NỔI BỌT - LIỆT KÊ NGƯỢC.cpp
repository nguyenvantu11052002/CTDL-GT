#include<bits/stdc++.h>

using namespace std;
int ok;
void duasodangxetnoibotlentancungbenphai(int a[], int n, int x){
	for(int i = 0; i < n - x - 1; i++){
		if(a[i] > a[i + 1]){
			swap(a[i], a[i + 1]);
			ok = 1;
		}
	}
}

void in(int a[], int n){
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
	vector<string> v;
	for(int i = 0; i < n - 1; i++){
		ok = 0;
		duasodangxetnoibotlentancungbenphai(a, n, i);
		if(ok == 0) break;
		string s = "Buoc " + to_string(i + 1) + ": ";
		for(int k = 0; k < n; k++){
			s += to_string(a[k]) + " ";
		}
		v.push_back(s);
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << endl;
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

