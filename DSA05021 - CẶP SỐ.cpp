#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

void TC(){
	int n;
	cin >> n;
	pair<int, int> pa[n];
	for(int i = 0; i < n; i++){
		cin >> pa[i].first;
		cin >> pa[i].second;
	}
	sort(pa, pa + n, cmp);
	int lis[n];
	for(int i = 0; i < n; i++){
		lis[i] = 1;
		for(int j = 0; j < i; j++){
			if(pa[i].first > pa[j].second){
				lis[i] = max(lis[i], lis[j] + 1);
			}
		}
	}
	int res = *max_element(lis, lis + n);
	cout << res << endl;
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
