#include<bits/stdc++.h>
 
using namespace std;

vector<int> adj[1001];
bool vs[1001];

void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v << " ";
		for(auto x : adj[v]){
			if(vs[x] == false){
				q.push(x);
				vs[x] = true;
			}
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
	}
	memset(vs, false, sizeof(vs));
	bfs(bd);
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
