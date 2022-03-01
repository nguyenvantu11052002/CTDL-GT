#include<bits/stdc++.h>
 
using namespace std;

int ok, a[105], b[105], n, k;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i] = 1;
	}
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]){
			sum += b[i];
		}
	}
	if(sum == k) return true;
	return false;
}

void inraketqua(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	ktao();
	ok = 1;
	int cnt = 0;
	while(ok){
		if(check()){
			cnt++;
			for(int i = 1; i <= n; i++){
				if(a[i]) cout << b[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
