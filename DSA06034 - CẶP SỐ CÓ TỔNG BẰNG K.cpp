#include<bits/stdc++.h>
 
using namespace std;

int firstpos(long long a[], int n, long long x, int l, int r){
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(x > a[m]){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int lastpos(long long a[], int n, long long x, int l, int r){
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(x > a[m]){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

void inraketqua(){
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long cnt = 0;
	for(int i = 0; i < n; i++){
		long long x = k - a[i];
		int l = firstpos(a, n, x, i + 1, n - 1);
		int r = lastpos(a, n, x, i + 1, n - 1);
		if(l != -1){
			cnt += (r - l + 1);
		}
	}
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

