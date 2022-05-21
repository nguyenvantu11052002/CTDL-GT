#include<bits/stdc++.h>
 
using namespace std;

int solve (int a, int b, char c) {
	if (c == '+') return a + b;
	if (c == '-') return a - b;
	if (c == '*') return a * b;
	return a / b;
}

void TC(){
	int n; cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	n = s.size();
	queue<int> q;
	
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == ' ') continue;
		if (isdigit(s[i])) {
			string tmp = "";
			while (isdigit(s[i])) {
				tmp = s[i--] + tmp;
			}
			i++;
			q.push(stoi(tmp));
		}
		else {
			int x = q.front(); q.pop(); // 20
			int y = q.front(); q.pop(); // 100
			q.push(solve(y, x, s[i]));
		}
	}
	cout << q.front() << endl;
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
