#include<bits/stdc++.h>

using namespace std;

const int maxn = 11;

int n, m;
char a[101][101];
bool vs[101][101];
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

void dfs(int i, int j) {
	vs[i][j] = true;
	for (int k = 0; k < 8; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'W' && vs[i1][j1] == false) {
			dfs(i1, j1);
		}
	}
}

void TC() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	memset(vs, false, sizeof(vs));
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 'W' && vs[i][j] == false) {
				cnt++;
				dfs(i, j);
			}
		}
	}
	cout << cnt << endl;
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int t = 1;
	//cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
