#include<bits/stdc++.h>

using namespace std;

void TC() {
	string s;
	cin >> s;
	int n = s.size();
	stack<int> st;
	for (int i = 0; i <= n; i++) {
		st.push(i + 1);
		if (s[i] == 'I' || i == n) {
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
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
