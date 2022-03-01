#include<bits/stdc++.h>
 
using namespace std;

int dem[5];

int solve(int b[], int x, int m){
	int res = 0;
	if(x == 0){
		return 0;
	}
	if(x == 1){
		return dem[0];
	}
	auto it = upper_bound(b, b + m, x) - b;
	res += (m - 1 - it + 1);
	if(x == 2){
		res -= dem[3];
		res -= dem[4];
	}
	if(x == 3){
		res += dem[2];
	}
	res += dem[1] + dem[0];
	return res;
}

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	memset(dem, 0, sizeof(dem));
	for(int i = 0; i < m; i++){
		cin >> b[i];
		if(b[i] <= 4){
			dem[b[i]]++;
		}
	}
	sort(b, b + m);
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cnt += solve(b, a[i], m);
	}
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
