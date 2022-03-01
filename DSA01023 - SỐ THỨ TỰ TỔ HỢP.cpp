#include<bits/stdc++.h>
 
using namespace std;

int n, k, a[20], bd[20], cnt;

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

bool check(){
	for(int i = 1; i <= k; i++){
		if(a[i] != bd[i]) return false;
	}
	return true;
}

void inkq(){
	cout << cnt << endl;
}

void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			cnt++;
			if(check()){
				inkq();
				return;
			}
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> bd[i];
	}
	cnt = 0;
	ktao();
	Try(1);
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

	

	
