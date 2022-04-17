#include<bits/stdc++.h>

using namespace std;

int solve(int res[], int n){
	int cnt = 0;
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(res[i] == 0){
			cnt++;
			ans = max(ans, cnt);
		}
		else cnt = 0;
	}
	return ans;
}

void TC(){
	string s;
	cin >> s;
	stack<pair<char, int>> st;
	int n = s.size();
	vector<int> a;
	for(int i = 0; i < n; i++){
		if(s[i] == '('){
			st.push({s[i], i}); 
		}
		else if(st.empty()){
			a.push_back(i); // ngoac ) sai;
		}
		else{
			st.pop();
		}
	}
	while(!st.empty()){
		pair<char, int> pa = st.top();
		st.pop();
		a.push_back(pa.second);
	}
	int res[n];
	memset(res, 0, sizeof(res));
	for(int i = 0; i < a.size(); i++){
		res[a[i]] = 1;
	}
	cout << solve(res, n) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
 
