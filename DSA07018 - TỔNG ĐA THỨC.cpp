#include<bits/stdc++.h>

using namespace std;

void TC() {
	string a, b;
	getline(cin, a);
	getline(cin, b);
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < '0' || a[i] > '9'){
			a[i] = ' ';
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] < '0' || b[i] > '9') b[i] = ' ';
	}
	int res[10005] = {0};
	istringstream sa(a);
	int x1;
	int x2;
	while (sa >> x1) {
		sa >> x2;
		res[x2] += x1;
	} 
	istringstream sb(b); 
	while (sb >> x1) {
		sb >> x2;
		res[x2] += x1;
	}
	string ans = "";
	for (int i = 10000; i >= 0; i--) { 
		if (res[i] != 0) {
			ans += to_string(res[i]) + "*x^" + to_string(i) + " + ";
			//cout << res[i] << "*x^" << i << " + ";
		}
	}
	int n = ans.size() - 1;
	for (int i = 1; i <= 3; i++) {
		ans.erase(ans.begin() + n);
		n--;
	}
	cout << ans << endl;
//	2
//	3*x^8 + 7*x^2 + 4*x^0
//	11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
//  3*x^8 + 11*x^6 + 16*x^2 + 2*x^1 + 7*x^0
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int t = 1;
	cin >> t;
	cin.ignore();
	while (t--) {
		TC();
	}
	return 0;
}
