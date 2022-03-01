#include<bits/stdc++.h>
 
using namespace std;

int n, a[20], bd[20], cnt, cx[20];

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

bool check(){
	for(int i = 1; i <= n; i++){
		if(a[i] != bd[i]) return false;
	}
	return true;
}

void inkq(){
	cout << cnt << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cx[j] == 0){
			cx[j] = 1;
			a[i] = j;
			if(i == n){
				cnt++;
				if(check()){
					inkq();
					return;
				}
			}
			else Try(i + 1);
			cx[j] = 0;
		}
	}
}

void TC(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> bd[i];
	}
	cnt = 0;
	memset(cx, 0, sizeof(cx));
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

	

	
