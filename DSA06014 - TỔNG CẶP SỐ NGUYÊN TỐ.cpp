#include<bits/stdc++.h>

using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void TC(){
	int n;
	cin >> n;
	for(int i = 2; i <= n/2; i++){ // so 4 = 2 + 2;
		if(snt(i)){
			if(snt(n - i)){
				cout << i << " " << n - i << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
