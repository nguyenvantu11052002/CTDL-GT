#include<bits/stdc++.h>

using namespace std;

int n, m;

int solve(int av[], int ar[]) {
	for (int i = 1; i <= n; i++) {
		if (av[i] != ar[i]) return 0;
	}
	return 1;
}

void TC() {
	cin >> n >> m;
	int av[n + 5] = {0};
	int ar[n + 5] = {0};
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		ar[x]++; av[y]++;
	}
	cout << solve(av, ar) << endl;
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
