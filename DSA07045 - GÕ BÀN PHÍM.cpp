#include<bits/stdc++.h>

using namespace std;

void TC () {
	string s;
	cin >> s;
	int n = s.size();
	stack<char> st;
	string res = "";
	for (int i = 0; i < n; i++) {
		char c = s[i];
		if (c == '<') {
			if (!res.empty()) {
				st.push(res.back());
				res.pop_back();
			}
		}
		else if (c == '>') {
			if (!st.empty()) {
				res += st.top();
				st.pop();
			}
		}
		else if (c == '-') {
			if (!res.empty()) res.pop_back();
		}
		else {
			res += s[i];
		}
	}
	while (!st.empty()) {
		res += st.top();
		st.pop();
	}
	cout << res << endl;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T = 1; 
	//cin >> T;
	while (T--) {
		TC();
	}
	return 0;
}
