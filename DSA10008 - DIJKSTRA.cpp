#include<bits/stdc++.h>

using namespace std;

const int maxn = 1001;

int n, m, s;
vector<pair<int, int>> adj[maxn];
int pr[maxn];

void dijkstra (int s) {
	vector<bool> vs(n + 1, false);
	vector<int> d(n + 1, 1e9);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > Q;
	d[s] = 0;
	pr[s] = s;
	Q.push({0, s});
	while (!Q.empty()) {
		pair<int, int> top = Q.top(); Q.pop();
		int u = top.second, kc = top.first;
		if (vs[u]) continue;
		vs[u] = true;
		for (auto x : adj[u]) {
			int v = x.first, w = x.second;
			if (d[u] + w < d[v]) {
				d[v] = d[u] + w;
				Q.push({d[v], v});
				pr[v] = u;
			} 
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << d[i] << " ";
	}
	cout << endl;
}

void TC () {
	cin >> n >> m >> s;
	// reset;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	memset(pr, 0, sizeof(pr));
	// vao test;
	int x, y, w;
	for (int i = 0; i < m; i++) {
		cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
	dijkstra(s);
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
