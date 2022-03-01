#include<bits/stdc++.h>
 
using namespace std;

int ok, a[1005], n, k;

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		for(int h = 1; h <= k; h++){
			cout << h << " ";
		}
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
		for(int j = 1; j <= k; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}

void inraketqua(){
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
		inraketqua();
	}
	return 0;
}
