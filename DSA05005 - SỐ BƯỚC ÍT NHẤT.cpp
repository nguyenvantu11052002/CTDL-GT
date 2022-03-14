#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	int lis[n]; // lis[i] : day con tang dai nhat khi xet toi vi tri i;
	memset(lis, 2, sizeof(lis));
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		lis[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] >= a[j]){ // co the chen vao day con khi xet toi vi tri j duoc;
				lis[i] = max(lis[i], lis[j] + 1);
			}
		}
	}
	int maxx = *max_element(lis, lis + n);
	int res = n - maxx;
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



