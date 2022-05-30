#include<bits/stdc++.h>
 
using namespace std;

vector<int> adj[1005];
int n;
set<int> se;
int pr[1005];

void dfs (int u) {
	for (auto x : adj[u]) {
		pr[x] = u;
		dfs(x);
	}
}

void solve (int x) {
	vector<int> path;
	while (pr[x] != 1) {
		path.push_back(x);
		x = pr[x];
	}
	path.push_back(x);
	path.push_back(1);
	reverse(path.begin(), path.end());
	for (auto x : path) {
		cout << x << " ";
	}
	cout << endl;
}

void TC(){
	cin >> n;
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	se.clear();
	memset(pr, 0, sizeof(pr));
	
	int x, y;
	for (int i = 0; i < n - 1; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
	}	
	for (int i = 1; i <= n; i++) {
		if (adj[i].size() == 0) {
			se.insert(i);
		}
	}
	dfs(1);
	for (auto x : se) {
		solve(x);
	}
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
