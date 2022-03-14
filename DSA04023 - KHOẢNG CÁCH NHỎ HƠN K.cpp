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
	long long res = 0;
	for(int i = 0; i < n; i++){
		int x = a[i] + k;
		// vi tri dau tien khong thoa man;
		auto it = lower_bound(a, a + n, x) - a;
		int vtcctm = it - 1;
		res += (vtcctm - (i + 1) + 1);
	}
	cout << res << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



