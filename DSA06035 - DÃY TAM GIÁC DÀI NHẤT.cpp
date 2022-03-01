#include<bits/stdc++.h>
 
using namespace std;

int left(int x, int a[], int n){ // chi so x;
    int res = 1;
    while(a[x] > a[x - 1] && x >= 1){
    	res++;
    	x--;
	}
	return res;
}

int right(int x, int a[], int n){
	int res = 1;
	while(a[x] > a[x + 1] && x <= n - 2){
		res++;
		x++;
	}
	return res;
}

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ok = 0;
	for(int i = 1; i < n; i++){
		if(a[0] != a[i]){
			ok = 1;
			break;
		}
	}
	if(ok == 0){
		cout << n << endl;
		return;
	}
	int cnt = 1;
	for(int i = 0; i < n; i++){
		//cout << "i = : " << i << " " << left(i, a, n) << " " << right(i, a, n) << endl;
		int d = left(i, a, n) + right(i, a, n) - 1;
		if(d > cnt) cnt = d;
	}
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
