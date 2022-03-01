#include<bits/stdc++.h>
 
using namespace std;

int ok, a[105], b[105], n, k;  // 1011
                               // 1100

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

void inraketqua(){
	cin >> n >> k;
	ktao();
	ok = 1;
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << (char)(a[i] + 'A' - 1);
		}
		cout << endl;
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
