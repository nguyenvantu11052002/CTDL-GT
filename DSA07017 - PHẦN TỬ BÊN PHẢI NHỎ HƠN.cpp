#include<bits/stdc++.h>

using namespace std;

void TC() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int r[n]; 
	stack<int> st;
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && a[st.top()] <= a[i]) {
			st.pop();
		}
		if (st.empty()) {
			r[i] = -1;
		}
		else {
			r[i] = st.top();
		}
		st.push(i);
	}
	while (!st.empty()) st.pop();
	int l[n];
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && st.top() >= a[i]) {
			st.pop();
		}
		if (st.empty()) {
			l[i] = -1;
		} 
		else {
			l[i] = st.top();
		}
		st.push(a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (r[i] == -1) {
			cout << -1 << " ";
		}
		else {
			cout << l[r[i]] << " ";
		}
	}
	cout << endl;
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
