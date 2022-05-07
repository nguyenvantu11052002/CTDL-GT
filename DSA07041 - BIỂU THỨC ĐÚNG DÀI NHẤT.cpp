#include<bits/stdc++.h>

using namespace std;

void TC() {
	string s;
	cin >> s;
	stack<char> st;
	int res = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') st.push(s[i]); //  
		else {
			if (!st.empty()) {
				st.pop();
				res +=2;
			}
		}
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
