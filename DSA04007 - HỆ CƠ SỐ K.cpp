#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int k;
	string a, b;
	cin >> k >> a >> b;
	while(a.size() < b.size()){
		a = "0" + a;
	}
	while(b.size() < a.size()){
		b = "0" + b;
	}
	//cout << a << " " << b << endl;
	int n = a.size();
	string ans = "";
	int pn = 0, pd = 0; // phan nguyen, phan du;
	for(int i = n - 1; i >= 0; i--){
		int so = (a[i] - '0') + (b[i] - '0') + pn;  // test them : 5 15 7 => ans = 32;
		pn = so/k;
		pd = so % k;
		ans = to_string(pd) + ans;
	}
	if(pn){
		ans = to_string(pn) + ans;
	}
	cout << ans << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



