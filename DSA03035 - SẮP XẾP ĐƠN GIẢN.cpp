#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	int F[n + 1] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
		F[a[i]] = F[a[i] - 1] + 1;
	}
	// 2 3 5 4 1 => day tang lien tuc cach nhau 1 don vi dai nhat la 2 3 4;
	// de thay rang vi de bai chi cho phep di chuyen phan tu vao 2 mut cua day so ( dau day or cuoi day) nen chung ta phai tim day tang lien tuc cach nhau 1 don vi dai nhat;
	// co dinh day tang lien tuc cach nhau 1 don vi va di chuyen nhung phan tu con lai ta duoc day sap xep;
	int res = n - *max_element(F + 1, F + n + 1);
	cout << res << endl;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	





