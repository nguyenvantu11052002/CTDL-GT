#include<bits/stdc++.h>
 
using namespace std;

int ok, a[1005], n, k;

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0){
		for(int m = 1; m <= n; m++){
			cout << m << " ";
		}
	}
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
		for(int i = 1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

void inraketqua(){
	cin >> n;
	for(int i = 1; i <= n; i++){
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
