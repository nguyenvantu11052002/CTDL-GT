#include<bits/stdc++.h>
 
using namespace std;


void TC(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long cnt = 0;
	for(int i = 0; i < n; i++){
		int x = k + a[i];
		// chiso : vi tri dau tien khong thoa man;
		auto it = lower_bound(a + i + 1, a + n, x);
		int chiso = it - a;
		if(chiso == n) cnt += (n - 1 - (i + 1) + 1);
		else cnt += (chiso - 1 - (i + 1) + 1);
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

