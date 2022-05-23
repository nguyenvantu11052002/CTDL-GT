#include<bits/stdc++.h>

using namespace std;

int ut (char c) {
	if (c == '^') return 3;
	if (c == '/' || c == '*') return 2;
	if (c == '+' || c == '-') return 1;
	return 0;
}

void TC() {
	string s;
	cin >> s;
	int n = s.size();
	stack<char> st; // luu cac dau + - * / ^ va (
	string res = ""; // luu cac ki tu A B C D ... 
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') st.push(s[i]);
		else if (s[i] == ')'){
			while (st.top() != '(') {
				res += st.top();
				st.pop();
			}
			st.pop();
		}
		else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
			while (!st.empty() && ut (st.top()) >= ut (s[i])) { // 6 - 5 * 3 ^ 2 ^ 4 * 6;
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		else res += s[i];
	}
	while (!st.empty()) {
		if (st.top() != '(') {
			res += st.top();
		}
		st.pop();
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
