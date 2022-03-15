#include<bits/stdc++.h>
 
using namespace std;

int n, b[20], x[20];
vector<vector<int> > res;
vector<int> a;

void Try(int i, int sum){
	for(int j = i + 1; j < n; j++){
		sum += b[j];
		a.push_back(b[j]);
		if(sum % 2){
			res.push_back(a);
		}
		Try(j, sum);
		sum -= b[j];
		a.pop_back();
	}
}

void TC(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	sort(b, b + n, greater<int> ());
	memset(x, 0, sizeof(x));
	Try(-1, 0);
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
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



