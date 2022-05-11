#include<bits/stdc++.h>

using namespace std;

const int maxn = 100001;

int n, m;
vector<int> adj[maxn];
bool vs[maxn];
int cnt;
int res;

void dfs (int u) {
	vs[u] = true;
	for (auto x : adj[u]) {
		if (vs[x] == false) {
			cnt++;
			dfs(x);
		}
	}
}

void TC() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	memset(vs, false, sizeof(vs));
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	res = INT_MIN;
	for (int i = 1; i <= n; i++) {
		cnt = 1;
		if (vs[i] == false) {
			dfs(i);
		}
		res = max(res, cnt);
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
