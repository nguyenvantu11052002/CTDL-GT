#include<bits/stdc++.h>
 
using namespace std;
int n, a[55], b[55];

bool check(){
	for(int i = 0; i < n; i++){
		if(a[i] != b[i] && a[i] != b[n - 1 - i]) return false;
	}
	return true;
}

void TC(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	copy(a, a + n, b);
	sort(b, b + n);
	if(check()){
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
