#include<bits/stdc++.h>
 
using namespace std;

vector<int> adj[1001];
bool vs[1001];
int parent[1001];
int n, m, a, b, ok;

void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		if(v == b){
			ok = 1;
		}
		for(auto x : adj[v]){
			if(vs[x] == false){
				vs[x] = true;
				q.push(x);
				parent[x] = v;
			}
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
	bfs(a);
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
	





