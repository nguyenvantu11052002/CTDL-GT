#include<bits/stdc++.h>
 
using namespace std;
int n;
int a[15][15];
int cheo1[100], cheo2[100];
int cnt;
int cot[100];
int ok;

void Try(int i){ // hang thu i;
	for(int j = 1; j <= n; j++){ // cot thu j;
		if(cot[j] == 0 && cheo1[i + j - 1] == 0 && cheo2[i - j + n] == 0){
			cot[j] = 1;
			cheo1[i + j - 1] = 1;
			cheo2[i - j + n] = 1;
			if(i == n){
				cnt++;
				ok = 1;
			}
			else Try(i + 1);
			// quay lui;
			cot[j] = 0;
			cheo1[i + j - 1] = 0;
			cheo2[i - j + n] = 0;
		}
	}
}

void TC(){
	cin >> n;
	cnt = 0;
	ok = 0;
	memset(cheo1, 0, sizeof(cheo1));
	memset(cheo2, 0, sizeof(cheo2));
	memset(cot, 0, sizeof(cot));
	Try(1);
	if(ok == 0){
		cout << -1;
	}
	else{
		cout << cnt;
	}
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

