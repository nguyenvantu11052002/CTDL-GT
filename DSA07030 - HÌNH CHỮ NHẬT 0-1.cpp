#include<bits/stdc++.h>

using namespace std;

int solve (int a[], int n) {
	stack<int> st;
	int l[n], r[n];
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[st.top()] >= a[i]) {
			st.pop();
		}
		if (st.empty()) {
			l[i] = 0;	
		}
		else l[i] = st.top() + 1;
		st.push(i);
	}
	while (!st.empty()) st.pop();
	
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && a[st.top()] >= a[i]) {
			st.pop();
		}
		if (st.empty()) {
			r[i] = n - 1;
		}
		else r[i] = st.top() - 1;
		st.push(i);
	}
	
	int res = 0;
	for (int i = 0; i < n; i++) {
		int canhday = r[i] - l[i] + 1;
		res = max (res, canhday * a[i]);
	}
	return res;
}

void TC () {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != 0 && a[i - 1][j] != 0) {
				a[i][j] += a[i - 1][j];
			}
		}
	}
	int res = 0;
	
	for (int i = 0; i < n; i++) {
		res = max (res, solve(a[i], m));
	}
	cout << res << endl;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T; 
	cin >> T;
	while (T--) {
		TC();
	}
	return 0;
}
