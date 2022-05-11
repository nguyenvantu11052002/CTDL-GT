#include<bits/stdc++.h>

using namespace std;

const int maxn = 11;

int n, m;
vector<int> adj[maxn];
bool vs[maxn];
int cnt;
int ok;
bool dfs (int u) {
	if (cnt == n) return true;
	for (auto x : adj[u]) {
		if (vs[x] == false) {
			vs[x] = true;
			cnt++;
			if (dfs(x)) return true;
			vs[x] = false;
			cnt--;
		}
	}
	return false;
}

void TC() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	memset(vs, false, sizeof(vs));
	ok = 0;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		cnt = 1;
		vs[i] = true;
		if (dfs(i)) {
			cout << 1 << endl;
			return;
		}
	}
	cout << 0 << endl;
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
