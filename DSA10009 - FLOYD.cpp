#include<bits/stdc++.h>

using namespace std;

const int maxn = 101;

int a[maxn][maxn];
int n, m;

void init() {
	cin >> n >> m;
	int u, v, c;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = 1001;
		}
	}
	for (int i = 1; i <= n; i++) {
		a[i][i] = 0;
	}
	for (int i = 0; i < m; i++) {
		cin >> u >> v >> c;
		a[u][v] = a[v][u] = c;
	}
	///////////////
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				a[i][j] = min (a[i][j], a[i][k] + a[k][j]);
			}
		}
	}
}

void TC () {
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x, y; cin >> x >> y;
		cout << a[x][y] << endl;
	}
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int t = 1;
	//cin >> t;
	init();
	while (t--) {
		TC();
	}
	return 0;
}
