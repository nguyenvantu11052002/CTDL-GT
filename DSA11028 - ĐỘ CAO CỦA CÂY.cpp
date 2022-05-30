#include<bits/stdc++.h>
 
using namespace std;

vector<int> adj[100005];
int high[100005];

void dfs (int u) {
	for (auto x : adj[u]) {
		dfs(x);
		high[u] = max(high[u], high[x] + 1);
	}
}

void TC(){
	int n;
	cin >> n;
	memset(high, 0, sizeof(high));
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	
	int x, y;
	for (int i = 0; i < n - 1; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
	}	
	dfs(1);
	cout << high[1] << endl;
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
