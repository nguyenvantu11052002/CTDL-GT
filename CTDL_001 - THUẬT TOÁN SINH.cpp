#include<bits/stdc++.h>
 
using namespace std;

int a[100], n, ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i > 0 && a[i] == 1){
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
	int l = 1, r = n;
	while(l < r){
		if(a[l] != a[r]) return false;
		l++; r--;
	}
	return true;
}

void inraketqua(){
	cin >> n;
	ktao();
	ok = 1;
	while(ok){
		if(check()){
			for(int i = 1; i <= n; i++){
				cout << a[i] << " ";
			}
			cout << endl;	
		}
		sinh();
	}
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
