#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}

void TC(){
	int n;
	cin >> n;
	pair<int, int> a[n];
	int x;
	int maxded = 0;
	for(int i = 0; i < n; i++){
		cin >> x >> a[i].first >> a[i].second;
		maxded = max(maxded, a[i].first);
	}
	int res = 0;
	int cnt = 0;
	bool vs[maxded + 5];
	memset(vs, false, sizeof(vs));
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		for(int j = a[i].first; j >= 1; j--){
			if(vs[j] == false){
				vs[j] = true;
				res += a[i].second;
				cnt++;
				break;
			}
		}
	}
	cout << cnt << " " << res << endl;
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
