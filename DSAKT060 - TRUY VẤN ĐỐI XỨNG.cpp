#include<bits/stdc++.h>
 
using namespace std;

string s;

bool check (string s1) {
	string res = s1;
	reverse(res.begin(), res.end());
	return res == s1;
}

void solve (char c, int a, int b) {
	if (c == 'q') {
		string res = s.substr(a, b - a + 1);
		//cout << "res cut ne " << res << endl;
		if (check(res)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	else {
		s[a] = b + '0';
	}
}

void TC () {
	cin >> s;
	s = " " + s;
	int q;
	cin >> q;
	char c; int a, b;
	
	while (q--) {
		cin >> c >> a >> b;
		solve(c, a, b);
	}
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
