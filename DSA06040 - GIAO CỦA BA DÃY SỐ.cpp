#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n, m, p;
	cin >> n >> m >> p;
	long long a[n], b[m], c[p];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	for(int i = 0; i < p; i++){
		cin >> c[i];
	}
	int i = 0, j = 0, k = 0;
	int ok = 0;
	while(i < n && j < m && k < p){
		if(a[i] == b[j] && a[i] == c[k]){
			cout << a[i] << " ";
			ok = 1;
			i++; j++; k++;
		}
		else if(a[i] <= b[j] && a[i] <= c[k]){
			i++;
		}
		else if(b[j] <= a[i] && b[j] <= c[k]){
			j++;
		}
		else k++;
	}
	if(ok == 0){
		cout << -1;
	}
	cout << endl;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
