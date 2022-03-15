#include<bits/stdc++.h>
 
using namespace std;
int n, b[20];
vector<int> a;
vector<vector<int> > res;

bool snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false; 
	}
	return true;
}

void Try(int i, int sum){
	for(int j = i + 1; j < n; j++){
		sum += b[j];
		a.push_back(b[j]);
		if(snt(sum)){
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
	Try(-1, 0);
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	res.clear();
	a.clear();
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



