#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int Lmin[n];
	Lmin[0] = a[0];
	for(int i = 1; i < n; i++){
		Lmin[i] = min(Lmin[i - 1], a[i]);
	}
	int Rmax[n];
	Rmax[n - 1] = a[n - 1];
	for(int i = n - 2; i >= 0; i--){
		Rmax[i] = max(Rmax[i + 1], a[i]);
	}
	int i = 0, j = 0, res = -1;        // [7 3 1 8 9 10 4 5 6];
	while(i < n && j < n){			   // [10 10 10 10 10 10 6 6 6]  Rmax;
		if(Lmin[i] < Rmax[j]){		   // [7 3 1 1 1 1 1 1 1] Lmin;
			if(j - i > res) res = j - i;
			j++;
		}
		else i++;
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

