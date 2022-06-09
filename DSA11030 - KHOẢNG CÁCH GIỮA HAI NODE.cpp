#include<bits/stdc++.h>
 
using namespace std;
 
vector<int> adj[1001];
bool vs[1001];
int res;
int ok;

void dfs(int u, int v, int cnt){
	if (ok) return;
	vs[u] = true;
	for (auto x : adj[u]) {
		if (vs[x] == false) {
			if (x == v) {
				res = cnt;
				ok = 1;
				return;
			}
			dfs(x, v, cnt + 1);
		}
	}
}
 
void TC () {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	memset(vs, false, sizeof(vs));
	int x, y;
	for (int i = 0; i < n - 1; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int q;
	cin >> q;
	while (q--) {
		int a, b;
		cin >> a >> b;
		res = 0;
		ok = 0;
		memset(vs, false, sizeof(vs));
		dfs(a, b, 1);
		cout << res << endl;
	}
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
