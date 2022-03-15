#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	long long n;
	cin >> n;
	long long a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int j = 0; j < n; j++){
		cin >> b[j];
	}
	sort(a, a + n);
	sort(b, b + n, greater<int> ());
	long long res = 0;
	for(int i = 0; i < n; i++){
		res += (a[i] * b[i]);
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



