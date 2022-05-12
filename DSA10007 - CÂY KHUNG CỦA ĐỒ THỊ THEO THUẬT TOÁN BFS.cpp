#include<bits/stdc++.h>

using namespace std;

const int maxn = 1001;

int n, m, s;
vector<int> adj[maxn];
vector<pair<int, int>> res;
bool vs[maxn];

void bfs (int u) {
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		for (auto x : adj[v]) {
			if (vs[x] == false) {
				res.push_back({v, x});
				vs[x] = true;
				q.push(x);
			}
		}
	}
}

void TC () {
	cin >> n >> m >> s;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	memset(vs, false, sizeof(vs));
	res.clear();
	
	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bfs(s);
	bool ok = true;
	for (int i = 1; i <= n; i++) {
		if (vs[i] == false) {
			ok = false;
			break;
		}
	}
	if (ok) {
		for (auto x : res) {
			cout << x.first << " " << x.second << endl;
		}
	}
	else cout << -1 << endl;
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
