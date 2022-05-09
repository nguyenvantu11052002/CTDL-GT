#include<bits/stdc++.h>

using namespace std;

int n, m, a[505][505];

int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
bool vs[505][505];
int cnt;

void dfs (int i, int j) {
	vs[i][j] = true;
	for (int k = 0; k < 8; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && vs[i1][j1] == false && a[i1][j1] == 1) {
			dfs (i1, j1);
		}
	}
}

void TC() {
	cin >> n >> m;
	memset(vs, false, sizeof(vs));
	cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vs[i][j] == false && a[i][j] == 1) {
				dfs (i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
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
