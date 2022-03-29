#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m, st1, st2;
bool vs[1001];
vector<pair<int, int> > edg;

void dfs(int u){
	vs[u] = true;
	for(auto x : adj[u]){
		if(vs[x] == false){
			if(x == st1 && u == st2 || x == st2 && u == st1) continue;
			else dfs(x);
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
		edg.push_back({x, y});
	}
	// duyet all canh, bo qua tung canh 1 roi dem so tp lien thong khi da bo qua canh do, neu so tplt tang len thi do chinh la canh cau;
	for(int i = 0; i < edg.size(); i++){
		st1 = edg[i].first;
		st2 = edg[i].second;
		int cnt = 0;
		memset(vs, false, sizeof(vs));
		for(int i = 1; i <= n; i++){
			if(vs[i] == false){
				dfs(i);
				cnt++;
			}
		}
		if(cnt > 1){
			if(st1 > st2) swap(st1, st2);
			cout << st1 << " " << st2 << " ";
		}
	}
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	edg.clear();
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
