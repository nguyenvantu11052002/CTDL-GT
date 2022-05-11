#include<bits/stdc++.h>

using namespace std;

const int maxn = 1001;

int n, m;
int cha[maxn], sz[maxn];
vector<pair<int, int> > pa;

void make_set () {
	for (int i = 1; i <= n; i++) {
		cha[i] = i;
		sz[i] = 1;
	}
}

int find (int v) {
	if (v == cha[v]) return v;
	return cha[v] = find(cha[v]);
}

bool Union (int u, int v) {
	int a = find(u);
	int b = find(v);
	//cout << "u a " << u << " " << a << endl;
	//cout << "v b " << v << " " << b << endl;
	if (a == b) return true;
	if (sz[a] < sz[b]) swap(a, b);
	sz[a] += sz[b];
	cha[b] = a;
	return false;
}

void TC() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		pa.push_back({x, y}); // luu ds canh;
	}
	int ok = 0;
	make_set();
	for(auto x : pa) {
		if (Union(x.first, x.second)) {
			ok = 1;
			break;
		}
	}
	if (ok) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	pa.clear();
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
