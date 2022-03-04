#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;
void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long res = 0;
	for(int i = 0; i < n; i++){
		res += a[i] * i;
		res %= m;
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
