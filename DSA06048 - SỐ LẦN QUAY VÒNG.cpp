#include<bits/stdc++.h>
 
using namespace std;

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
	int n;
	cin >> n;
	long long a[n];
	long long x = LLONG_MIN;
	int chiso = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] > x){
			x = a[i];
			chiso = i;
		}
	}
	if(x == a[n - 1]){
		cout << 0 << endl;
		return;
	}
	int ans1 = lastpos(a, n, x, 0, chiso);
	int ans2 = lastpos(a, n, x, chiso + 1, n - 1);
	cout << max(ans1, ans2) + 1 << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

