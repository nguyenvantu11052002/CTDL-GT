#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> tmp) {
	cout << "[";
	for (int i = 0; i < tmp.size() - 1; i++) {
		cout << tmp[i] << " ";
	}
	cout << tmp[tmp.size() - 1] << "]" << endl;
}

void TC () {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> tmp;
	tmp = a;
	while (n--) {
		vector<int> res;
		solve(tmp);
		for (int i = 0; i < tmp.size() - 1; i++) {
			int them = tmp[i] + tmp[i + 1];
			res.push_back(them);
		}
		tmp = res;
	}
}
 
int main () {
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
