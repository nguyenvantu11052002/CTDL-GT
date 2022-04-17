#include<bits/stdc++.h>

using namespace std;

void TC() {
	string s;
	cin >> s;
	int n = s.size();
	s = " " + s;
	long long F[n + 5];
	F[1] = s[1] - '0';
	long long res = F[1];
	for (int i = 2; i <= n; i++) {
		F[i] = F[i - 1] * 10 + (s[i] - '0') * i; // 1234
		res += F[i];
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
