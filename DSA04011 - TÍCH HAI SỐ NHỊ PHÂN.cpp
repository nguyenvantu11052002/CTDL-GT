#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	string a, b;
	cin >> a >> b;
	long long a1 = 0, b1 = 0;
	int n = a.size(), m = b.size();
	// chuyen a;
	for(int i = n - 1; i >= 0; i--){
		int d = a[i] - '0';
		if(d){
			a1 += pow(2, n - i - 1);
		}
	}
	for(int i = m; i >= 0; i--){
		int d = b[i] - '0';
		if(d){
			b1 += pow(2, m - i - 1);
		}
	}
	long long res = a1 * b1;
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



