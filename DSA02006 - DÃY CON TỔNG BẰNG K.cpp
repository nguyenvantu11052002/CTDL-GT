#include<bits/stdc++.h>

using namespace std;

int n, k, a[15], ok;
vector<int> res;

void solve () {
	cout << "[";
	for (int i = 0; i < res.size() - 1; i++) {
		cout << res[i] << " ";
	}
	cout << res[res.size() - 1] << "] ";
} 

void Try (int i, int sum) {
	for (int j = i + 1; j <= n; j++) {
		res.push_back(a[j]);
		sum += a[j];
		if (sum == k) {
			ok = 1;
			solve();
		}
		else if (sum < k) Try(j, sum);
		sum -= a[j];
		res.pop_back();
	}
}

void TC () {
	ok = 0;
	res.clear();
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	Try(0, 0);
	if (ok) cout << endl;
	else cout << -1 << endl;
}
 
int main () {
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
