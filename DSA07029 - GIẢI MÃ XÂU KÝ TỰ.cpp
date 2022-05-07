#include<bits/stdc++.h>

using namespace std;

void TC() {
	string s;
	cin >> s;
	stack<string> st;
	stack<int> st1;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			int num = 0;
			while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
				num = num * 10 + (s[i] - '0');
				i++;
			}
			i--;
			st1.push(num);
		}
		else if (s[i] == ']') {
			string tmp = "";
			while (st.top()[0] != '[') {
				tmp = st.top() + tmp;
				st.pop();
			}
			st.pop();
			int dem = st1.top();
			st1.pop();
			string them = "";
			while (dem--) {
				them += tmp;
			}
			st.push(them);
		}
		else {
			st.push(string(1, s[i]));
			if (s[i] == '[' && (i == 0 || s[i - 1] < '0' || s[i - 1] > '9')) {
				st1.push(1);
			}
		}
	}
	string res = "";
	while (!st.empty()) {
		res = st.top() + res;
		st.pop();
	}
	cout << res << endl;
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int t = 1;
	cin >> t;
	cin.ignore();
	while (t--) {
		TC();
	}
	return 0;
}
