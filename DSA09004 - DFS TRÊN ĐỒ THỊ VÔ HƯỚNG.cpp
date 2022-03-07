#include<bits/stdc++.h>
 
using namespace std;

vector<int> adj[1001];
bool vs[1001];

void dfs(int u){
	cout << u << " ";
	vs[u] = true;
	for(auto v : adj[u]){
		if(vs[v] == false){
			dfs(v);
		}
	}
}

void TC(){
	int n, m, bd;
	cin >> n >> m >> bd;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vs, false, sizeof(vs));
	dfs(bd);
	cout << endl;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
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
