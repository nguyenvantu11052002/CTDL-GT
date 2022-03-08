#include<bits/stdc++.h>
 
using namespace std;
int n, a[100005];

int solve(){
	int res = INT_MIN;
	int a1 = a[n - 1] * a[n - 2];
	res = max(res, a1);
	int a2 = a1 * a[n - 3];
	res = max(res, a2);
	int a3 = a[0] * a[1];
	res = max(res, a3);
	int a4 = a3 * a[2];
	res = max(res, a4);
	int a5 = a3 * a[n - 1];
	res = max(res, a5);
	return res;
}

void TC(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	cout << solve() << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
