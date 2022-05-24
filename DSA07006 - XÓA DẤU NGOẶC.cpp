#include<bits/stdc++.h>
 
using namespace std;
vector<pair<int, int> > pa;
 
string solve(string s, string s1) { // xoa cac dau ngoac co chi so s1 trong xau s;
	vector<int> dd(s.size(), 1);
	for (int i = 0; i < s1.size(); i++) {
		for (auto x : pa) {
			if (x.first == s1[i] - '0') {
				dd[x.second] = 0;
			}
		}
	}
	string res = "";
	for (int i = 0; i < dd.size(); ++i) {
		if (dd[i]) res += s[i];
	}
	return res;
}
 
void TC () {
	string s;
	cin >> s;
	int m = s.size();
	int n = 0;
	for (int i = 0; i < m; i++) {
		if (s[i] == '(') {
			n++;
		}
	}
 
	int cnt = 0;      
	stack<pair<int, int> > st;        
	for (int i = 0; i < m; i++) {  // ()()(()())
		if (s[i] == '(') {
			st.push({cnt, i});    // (1+(2*(3+4)))
			pa.push_back({cnt, i});
			cnt++;
		}
		else if (s[i] == ')' && !st.empty()) {
			int x = st.top().first;
			st.pop();
			pa.push_back({x, i});
		}
	}
	
	queue<string> q;
	queue<string> q1; 
	for (int i = 0; i < n; i++) {
		q.push(to_string(i));
		q1.push(to_string(i));
	}
 
	while (q.front().size() < n) { 
		string s1 = q.front();
		q.pop();
		int chusocuoicungs1 = (s1.back() - '0');
		for (int i = chusocuoicungs1 + 1; i < n; i++) {
			q.push(s1 + to_string(i));
			q1.push(s1 + to_string(i));
		}
	}
 
 	set<string> ans;
	while (!q1.empty()) {
		string s1 = q1.front();
		q1.pop();
		ans.insert(solve(s, s1));
	}
	for (auto x : ans) {
		cout << x << endl;
	}
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
