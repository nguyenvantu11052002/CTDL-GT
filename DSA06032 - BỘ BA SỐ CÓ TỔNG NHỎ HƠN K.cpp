#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long cnt = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			long long x = k - a[i] - a[j];
			auto it = lower_bound(a + j + 1, a + n, x); // chi so cua phan dau tien khong thoa man;
			int chiso = it - a;
			cnt += (chiso - j - 1);
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


