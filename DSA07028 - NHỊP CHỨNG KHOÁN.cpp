#include<bits/stdc++.h>

using namespace std;

void TC() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l[n]; 
	stack<int> st;
	for (int i = 0; i < n; i++) {
		while(!st.empty() && a[st.top()] <= a[i]) {
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
	for (int i = 0; i < n; i++) {
		cout << i - l[i] + 1 << " ";
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
