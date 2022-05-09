#include<bits/stdc++.h>

using namespace std;

int n, m;

int solve(int a[]) {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] % 2 != 0) {
			cnt++;
		}
	}
	if (cnt == 0) return 2;
	if (cnt == 2) return 1;
	return 0;
}

void TC() {
	cin >> n >> m;
	int a[n + 5] = {0};
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		a[x]++; a[y]++;
	}
	cout << solve(a) << endl;
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
