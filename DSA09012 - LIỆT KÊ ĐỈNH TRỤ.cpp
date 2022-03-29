#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m;
bool vs[1001];

void dfs(int u, int i){ 
	vs[u] = true;
	for(auto x : adj[u]){
		if(vs[x] == false){
			if(x == i) continue;
			else{
				dfs(x, i);
			}
		}
	}
}

void TC(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		memset(vs, false, sizeof(vs));
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			if(j == i) continue;
			if(vs[j] == false){
				dfs(j, i);
				cnt++;
			}
		}
		if(cnt > 1){ 
			cout << i << " ";
		}
	}
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	cout << endl;
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
