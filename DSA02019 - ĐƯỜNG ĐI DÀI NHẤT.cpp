#include<bits/stdc++.h>
 
using namespace std;

int n, m;
vector<int> adj[25];
bool vs[25][25];
int res;

void dfs (int u, int cnt) {
	res = max(res, cnt);  
	for (auto x : adj[u]) {
		if (vs[u][x] == false) {
			vs[u][x] = vs[x][u] = true;
			dfs(x, cnt + 1);
			vs[u][x] = vs[x][u] = false;
		}
	}
}

void TC(){
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		adj[i].clear();
	}
	memset(vs, false, sizeof(vs));
	res = 0;
	
	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 0; i < n; i++) {
		dfs(i, 0);
	}
	cout << res << endl;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
