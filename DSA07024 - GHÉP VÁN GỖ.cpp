#include<bits/stdc++.h>

using namespace std;

void TC () {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
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
		if (canhday >= a[i]) {
			res = max(res, a[i]);
		}
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
