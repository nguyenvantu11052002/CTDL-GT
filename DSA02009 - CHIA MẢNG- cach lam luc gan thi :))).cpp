#include<bits/stdc++.h>

using namespace std;

int n, k, a[25], ok, sum, vs[25];

void Try (int tong, int cnt) {
	if (ok) return;
	for (int j = 1; j <= n; j++) {
		if (vs[j] == false) {
			vs[j] = true;
			tong += a[j];
			/////////////////////////////////////////////////////
			if (tong == sum) {
				cnt++;
				if (cnt == k) {
					ok = 1;
					return;
				}
				Try(0, cnt);
				cnt--;
			}
			else if (tong < sum) Try(tong, cnt);
			/////////////////////////////////////////////////////
			tong -= a[j];
			vs[j] = false;
		}
	}
}

void TC () {
	sum = 0;
	ok = 0;
	memset(vs, false, sizeof(vs));
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	
	if (sum % k != 0) {
		cout << 0 << endl;
		return;
	}
	sum /= k;
	Try (0, 0);
	cout << ok << endl;
}

int main () {
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
