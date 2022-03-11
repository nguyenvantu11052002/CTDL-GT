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
	}
	for(int i = 0; i < n; i++){
		cin >> pa[i].second;
	}
	sort(pa, pa + n, cmp);
	int cnt = 1;
	int tmp = pa[0].second;
	//cout << "tmp ne : " << tmp << endl;
	for(int i = 1; i < n; i++){
		if(tmp <= pa[i].first){
			tmp = pa[i].second;
			cnt++;
		}
	}
	cout << cnt << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



