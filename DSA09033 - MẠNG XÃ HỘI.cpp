#include<bits/stdc++.h>

using namespace std;

int n, m;
bool vs[100001];
vector<int> adj[100001];
set<int> se;

void dfs (int u) {
	vs[u] = true;
	for (auto x : adj[u]) {
		if (vs[x] == false) {
			dfs (x);
		}
	}
}

void TC() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	memset(vs, false, sizeof(vs));
	se.clear();
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		se.insert(x);
		se.insert(y);
	}
	vector<int> res(se.begin(), se.end());
	dfs(res[0]);
	for (int i = 0; i < res.size(); i++) {
		if (vs[res[i]] == false) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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
