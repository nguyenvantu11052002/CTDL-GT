#include<bits/stdc++.h>

using namespace std;

void TC() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l[n], r[n];
	stack<int> st;
	
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[i] <= a[st.top()]) {
			st.pop();
		}
		if (st.empty()) {
			l[i] = 0;
		}
		else {
			l[i] = st.top() + 1;
		}
		st.push(i);
	}
	while (!st.empty()) st.pop();
	
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && a[i] <= a[st.top()]) {
			st.pop();
		}
		if (st.empty()) {
			r[i] = n - 1;
		}
		else {
			r[i] = st.top() - 1;
		}
		st.push(i);
	}
	
	long long res = 0;
	for (int i = 0; i < n; i++) {
		long long tmp = (long long) (r[i] - l[i] + 1) * a[i];
		res = max (res, tmp);
	}
	cout << res << endl;
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
