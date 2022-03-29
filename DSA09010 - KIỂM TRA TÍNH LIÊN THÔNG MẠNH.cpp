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

bool check(int n){
	for(int i = 1; i <= n; i++){
		memset(vs, false, sizeof(vs));
		bfs(i);
		for(int j = 1; j <= n; j++){
			if(vs[j] == false){
				return false;
			}
		}
	}
	return true;
}

void TC(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	if(check(n)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
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
