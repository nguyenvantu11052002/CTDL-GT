#include<bits/stdc++.h>
 
using namespace std;

vector<int> adj[1001];
bool vs[1001];
int parent[1001];
int n, m, a, b, ok;

void dfs(int u){
	if(u == b){
		ok = 1;
	}
	vs[u] = true;
	for(auto x : adj[u]){
		if(vs[x] == false){
			parent[x] = u;
			dfs(x);
		}
	}
}

void trace(){
	vector<int> path;
	while(b != a){
		path.push_back(b);
		b = parent[b];
	}
	path.push_back(a);
	reverse(path.begin(), path.end());
	for(auto x : path){
		cout << x << " ";
	}
	cout << endl;
}

void TC(){
	ok = 0;
	cin >> n >> m >> a >> b;
	memset(vs, false, sizeof(vs));
	memset(parent, 0, sizeof(parent));
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	dfs(a);
	if(ok){
		trace();
	}
	else{
		cout << -1 << endl;
	}
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
	





