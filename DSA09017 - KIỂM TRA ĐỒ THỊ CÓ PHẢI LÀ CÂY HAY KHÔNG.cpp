#include<bits/stdc++.h>

using namespace std;

const int maxn = 1001;

int n;
vector<int> adj[maxn];
bool vs[maxn];

void dfs (int u) {
	vs[u] = true;
	for (auto x : adj[u]) {
		if (vs[x] == false) {
			dfs (x);
		}
	}
}

void TC() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	memset(vs, false, sizeof(vs));
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs (1);
	for (int i = 1; i <= n; i++) {
		if (vs[i] == false) {
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
