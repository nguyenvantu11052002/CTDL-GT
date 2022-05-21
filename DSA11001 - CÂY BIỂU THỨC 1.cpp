#include<bits/stdc++.h>
 
using namespace std;

bool check (char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/') return true;
	return false;
}

void TC(){
	string s;
	cin >> s;
	int n = s.size();
	stack<string> st;
	
	for (int i = 0; i < n; i++) {
		if (check(s[i])) {
			string s1 = st.top();
			st.pop();
			string s2 = st.top();
			st.pop();
			string them = s2 + s[i] + s1;
			st.push(them);
		}
		else {
			st.push(string(1, s[i]));
		}
	}
	cout << st.top() << endl;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
