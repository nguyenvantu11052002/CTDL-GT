#include<bits/stdc++.h>

using namespace std;

void TC() {
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	stack<int> st;
	int res[n];
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && mp[a[i]] >= mp[st.top()]) {
			st.pop();
		}
		if (st.empty()) {
			res[i] = -1;
		} else {
			res[i] = st.top();
		}
		st.push(a[i]);
 	}
 	for (int i = 0; i < n; i++) {
 		cout << res[i] << " ";
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
