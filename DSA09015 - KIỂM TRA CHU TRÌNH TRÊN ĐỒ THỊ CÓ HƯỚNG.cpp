#include<bits/stdc++.h>

using namespace std;

int n, m;
int cl[1001];
vector<int> adj[1001];

bool dfs (int u) {
	cl[u] = 1;
	for (auto x : adj[u]) {
		if (cl[x] == 0) {
			if (dfs(x)) return true;
		}
		else if (cl[x] == 1) return true;
	}
	cl[u] = 2;
	return false;
}

void TC() {
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(cl, 0, sizeof(cl));
	
	for (int i = 1; i <= n; i++) {
		if (cl[i] == 0) {
			if (dfs(i)){
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
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
