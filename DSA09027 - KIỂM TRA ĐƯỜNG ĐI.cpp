#include<bits/stdc++.h>
 
using namespace std;

vector<int> adj[1001];
bool vs[1001];
int bd, kt, ok; // co duong di tu bd toi kt hay khong ?

void dfs(int u){
	vs[u] = true;
	if(u == kt){
		ok = 1;
		return;
	}
	for(auto v : adj[u]){
		if(vs[v] == false){
			dfs(v);
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
	int q;
	cin >> q;
	while(q--){
		cin >> bd >> kt;
		memset(vs, false, sizeof(vs));
		ok = 0;
		dfs(bd);
		if(ok){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
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



