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
	int res = 0;
	for(int i = 1; i <= n; i++){
		res += a[i];
	}
	return res == k;
}

void inraketqua(){
	cin >> n >> k;
	ktao();
	ok = 1;
	while(ok){
		if(check()){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << endl;
		}
		sinh();
	}
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
