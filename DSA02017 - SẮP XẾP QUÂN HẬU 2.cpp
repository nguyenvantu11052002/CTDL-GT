#include<bits/stdc++.h>
 
using namespace std;

int a[10][10], b[10][10];
int cot[10], cheo1[20], cheo2[20];
int sum, res;

void solve(){
	sum = 0;
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			if(b[i][j]) sum += a[i][j];
		}
	}
	res = max(res, sum);
}

void Try(int i){ // hang thu i;
	for(int j = 1; j <= 8; j++){
		if(cot[j] == 0 && cheo1[i - j + 8] == 0 && cheo2[i + j] == 0){
			cot[j] = 1;
			cheo1[i - j + 8] = 1;
			cheo2[i + j] = 1;
			b[i][j] = 1;
			if(i == 8){
				solve();
			}
			else Try(i + 1);
			cot[j] = 0;
			cheo1[i - j + 8] = 0;
			cheo2[i + j] = 0;
			b[i][j] = 0;
		}
	}
}

void TC(){
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			cin >> a[i][j];
		}
	}
	memset(cot, 0, sizeof(cot));
	memset(cheo1, 0, sizeof(cheo1));
	memset(cheo2, 0, sizeof(cheo2));
	memset(b, 0, sizeof(b));
	res = 0;
	Try(1);
	cout << res << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	


