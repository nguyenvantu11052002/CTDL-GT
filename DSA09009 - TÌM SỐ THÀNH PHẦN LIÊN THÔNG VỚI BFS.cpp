#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m;
bool vs[1001];

void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x : adj[v]){
			if(vs[x] == false){
				vs[x] = true;
				q.push(x);
			}
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
			bfs(i);
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
