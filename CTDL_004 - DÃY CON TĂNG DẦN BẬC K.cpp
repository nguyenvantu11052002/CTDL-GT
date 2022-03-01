#include<bits/stdc++.h>
 
using namespace std;
int n, k, x[105], a[105], cnt;

void ktao(){
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}

 bool check(){
 	for(int i = 1; i <= k - 1; i++){
 		if(a[x[i]] > a[x[i + 1]]) return false;
	}
	return true;
 }

void Try(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			if(check()){
				cnt++;
			}
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	ktao();
	Try(1);
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	


