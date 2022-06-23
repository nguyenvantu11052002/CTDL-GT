#include<bits/stdc++.h>

using namespace std;

int n, x, a[25], ok;
vector<int> res;

void solve () {
	cout << "[";
	for (int i = 0; i < res.size() - 1; i++) {
		cout << res[i] << " ";
	}
	cout << res[res.size() - 1] << "]";
}

void Try (int i, int sum) {
	for (int j = i; j <= n; j++) {
		res.push_back(a[j]);
		sum += a[j];
		if (sum == x) {
			ok = 1;
			solve();
		}
		else if (sum < x) Try(j, sum);
		res.pop_back();
		sum -= a[j];
	}
}

void TC () {
	ok = 0;
	res.clear();
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}	
	sort(a + 1, a + n + 1);
	Try(1, 0);
	if (ok == 0) {
		cout << -1 << endl;
	}
	else cout << endl;
}

int main () {
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
