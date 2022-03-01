#include<bits/stdc++.h>
 
using namespace std;

bool tim(int a[], int n, int x, int l, int r){
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			return true;
		}
		else if(x > a[m]){
			l = m + 1;
		}
		else r = m - 1;
	}
	return false;
}

int check(int a, int b){
	long long cmu2 = (long long)a * a + (long long) b * b;
	int c = sqrt(cmu2);
	if((long long)c * c == cmu2) return c;
	return 0;
}
	
void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			int x = check(a[i], a[j]);
			//cout << "x " << x << ")" << endl;
			if(x){
				if(tim(a, n, x, j + 1, n - 1)){
					cout << "YES" << endl;
					return;
				}
			}
		}
	}
	cout << "NO" << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
