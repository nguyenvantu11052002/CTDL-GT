#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m;
bool vs[1001];
int pr[1001];

bool dfs(int u){
	vs[u] = true;
	for(auto x : adj[u]){
		if(vs[x] == false){
			pr[x] = u;
			if(dfs(x)) return true;
		}
		else if(x != pr[u]){
				return true;
		}
	}
	return false;
}

void TC(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vs, false, sizeof(vs));
	memset(pr, 0, sizeof(pr));
	for(int i = 1; i <= n; i++){
		if(vs[i] == false){
			if(dfs(i)){
				cout << "YES" << endl;
				for(int i = 1; i <= n; i++){
					adj[i].clear();
				}
				return;
			}
		}
	}
	cout << "NO" << endl;
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
