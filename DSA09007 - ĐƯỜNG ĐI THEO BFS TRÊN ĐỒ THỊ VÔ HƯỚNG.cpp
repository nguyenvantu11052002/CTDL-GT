#include<bits/stdc++.h>
 
using namespace std;

int n, m, s, t, ok;
vector<int> adj[1001];
bool vs[1001];
int pr[1001];

void trace(){
	vector<int> path;
	while(t != s){
		path.push_back(t);
		t = pr[t];
	}
	path.push_back(s);
	reverse(path.begin(), path.end());
	for(auto x : path){
		cout << x << " ";
	}
	cout << endl;
}

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
				pr[x] = v;
				if(x == t){
					ok = 1;
					return;
				}
			}
		}
	}
}

void TC(){
	cin >> n >> m >> s >> t;
	ok = 0;
	memset(vs, false, sizeof(vs));
	memset(pr, 0, sizeof(pr));
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bfs(s);
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

//6 8 3 6
//1 2 1 3 2 3 2 5 3 4 3 5 4 5 5 6
	





