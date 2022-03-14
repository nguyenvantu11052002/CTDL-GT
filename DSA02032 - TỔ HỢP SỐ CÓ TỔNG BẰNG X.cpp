#include<bits/stdc++.h>
 
using namespace std;
int n, s, b[25];
vector<int> a;
vector<vector<int> > res;

void Try(int i,int sum){
	for(int j = i; j < n; j++){
		sum += b[j];
		a.push_back(b[j]);
		if(sum == s){
			res.push_back(a);
		}
		else if(sum < s){
			Try(j, sum);
		}
		sum -= b[j];
		a.pop_back();
	}
}

void TC(){
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	sort(b, b + n);
	Try(0, 0);
	if(res.size() == 0){
		cout << -1 << endl;
		return;
	}
	cout << res.size() << " ";
	for(int i = 0; i < res.size(); i++){
		cout << "{";
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j];
			if(j != res[i].size() - 1){
				cout << " ";
			}
		}
		cout << "} ";
	}
	cout << endl;
	a.clear();
	res.clear();
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



