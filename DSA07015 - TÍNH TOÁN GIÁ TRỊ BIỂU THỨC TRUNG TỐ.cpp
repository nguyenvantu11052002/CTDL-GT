#include<bits/stdc++.h>

using namespace std;

int ut (char c) {
	if (c == '*' || c == '/') return 3;
	if (c == '+' || c == '-') return 2;
	return 1;
}

long long tinhtoan (long long x, long long y, string s) {
	char c = s[0];
	if (c == '+') return x + y;
	if (c == '-') return x - y;
	if (c == '*') return x * y;
	return x / y;
}

bool checktoantu (string s) {
	char c = s[0];
	if (c == '+' || c == '-' || c == '*' || c == '/') return true;
	return false;
}

void TC () {
	string s;
	cin >> s;
	int n = s.size();
	vector<string> res; // luu bieu thuc hau to;
	stack<char> st; // luu dau ngoac mo ( va cac phep tinh + - * /;
	
	for (int i = 0; i < n; i++) {
		if (isdigit(s[i])) {
			string num = "";
			while (i < n && isdigit(s[i])) {
				num += s[i];
				i++;
			}
			i--;
			res.push_back(num);
		} 
		else if (s[i] == '(') {
			st.push(s[i]);
		}
		else if (s[i] == ')') {
			while (st.top() != '(') {
				res.push_back(string(1, st.top()));
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty() && ut(st.top()) >= ut(s[i])) {
				res.push_back(string(1, st.top()));
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while (!st.empty()) {
		res.push_back(string(1, st.top()));
		st.pop();
	}
	// bat dau tinh toan;
	stack<long long> ans;
	for (int i = 0; i < res.size(); i++) {
		if (checktoantu(res[i])) {
			long long x = ans.top();
			ans.pop();
			long long y = ans.top();
			ans.pop();
			ans.push(tinhtoan(y, x, res[i]));
		}
		else {
			ans.push(stoll(res[i]));
		}
	}
	cout << ans.top() << endl;
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
