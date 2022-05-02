#include<bits/stdc++.h>

using namespace std;

void doidau (string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-') s[i] = '+';
		else if (s[i] == '+') s[i] = '-';
	}
}

string solve (string s) {
	stack<string> st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ')') {
			string tmp = "";
			while (st.top()[0] != '(') {
				tmp = st.top() + tmp;
				st.pop();
			}
			st.pop();
			if (!st.empty() && st.top()[0] == '-') {
				doidau(tmp);
				st.push(tmp);
			}
			else {
				st.push(tmp);
			}
		}
		else {
			st.push(string(1, s[i]));
		}
	}
	string res = "";
	while (!st.empty()) {
		res = st.top() + res;
		st.pop();
	}
	return res;
}

void TC() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << (solve(s1) == solve(s2) ? "YES" : "NO");
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
