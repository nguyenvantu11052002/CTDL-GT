#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m;
bool vs[1001];

void dfs(int u){
	vs[u] = true;
	for(auto x : adj[u]){
		if(vs[x] == false){
			dfs(x);
		}
	}
}

void TC(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vs, false, sizeof(vs));
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(vs[i] == false){
			dfs(i);
			cnt++;
		}
	}
	cout << cnt << endl;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
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
