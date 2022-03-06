#include<bits/stdc++.h>
 
using namespace std;

int a[25][25];
int n, x[25], cx[25], S = 0, res = INT_MAX;
int cmin = INT_MAX;

void Try(int i){
	for(int j = 2; j <= n; j++){
		if(cx[j] == 0){
			cx[j] = 1;
			x[i] = j;
			S += a[x[i - 1]][x[i]];
			//cout << i << " " << j << endl;
			if(i == n){
				if(S + a[x[i]][1] < res) res = S + a[x[i]][1];
			}
			else if(S + (n - i + 1) * cmin < res) Try(i + 1);
			S -= a[x[i - 1]][x[i]];
			cx[j] = 0;
		}
	}
}

void TC(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(i != j){
				cmin = min(cmin, a[i][j]);
			}
		}
	}
	//cout << "cmin " << cmin << endl;
	x[1] = 1;
	memset(cx, 0, sizeof(cx));
	Try(2);
	cout << res << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
