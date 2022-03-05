#include<bits/stdc++.h>
 
using namespace std;

int a[1001][1001];
vector<int> adj[1001];
void TC(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		cout << i <<": ";
		for(auto x : adj[i]){
			cout << x << " ";
		}
		cout << endl;
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


