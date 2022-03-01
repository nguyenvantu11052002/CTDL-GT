#include<bits/stdc++.h>
 
using namespace std;
int n, k, a[1005], ok;

void sinh(){
	int i = k - 1;
	while(i >= 1 && a[i] + 1 == a[i + 1]){
		i--;
	}
	if(i == 0 && a[1] == 1){
		for(int j = 1; j <= k; j++){
			cout << n - k + j << " ";
		}
		cout << endl;
	}
	else{
		a[i + 1]--;
		for(int j = i + 2; j <= k; j++){
			a[j] = n - k + j;
		}
		for(int j = 1; j <= k; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}

void TC(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> a[i];
	}
	sinh();
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

