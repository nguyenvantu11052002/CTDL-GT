#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	long long n, x;
	cin >> n >> x;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	auto it = upper_bound(a, a + n, x) - a;
	if(it == 0){
		cout << -1 << endl;
	}
	else{
		cout << it << endl;
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
