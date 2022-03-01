#include<bits/stdc++.h>
 
using namespace std;
 
int n, m, a[105][105], chuaxet[105][105];
int cnt;
int dx[2] = {1, 0};
int dy[2] = {0, 1};
int cach;
void inkq(){ // vi tri chuaxet[i][j] == 1;
    cout << "cach " << cach++ << ":" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << chuaxet[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Try(int i, int j){
	if(i == n -1 && j == m - 1){
		cnt++;
		//inkq();
		return;
	}
	//cout << i << " " << j << endl;
	for(int l = 0; l < 2; l++){
		int i1 = i + dx[l];
		int j1 = j + dy[l];
		if(i1 < n && j1 < m){  // 1  2  3 
			Try(i1, j1);							   // 4  5  6;
		}
	}
	//chuaxet[i][j] = 0;
}

void TC(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	memset(chuaxet, 0, sizeof(chuaxet));
	cnt = 0;
	cach = 1;
	Try(0, 0);
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
