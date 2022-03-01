#include<bits/stdc++.h>
 
using namespace std;

int ok, a[25], n, k;

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

void inraketqua(){
	cin >> n;
	ktao();
	ok = 1;
	while(ok){
		for(int i = 1; i <= n; i++){
			if(a[i]) cout << "B";
			else cout << "A";
		}
		cout << " ";
		sinh();
	}
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
