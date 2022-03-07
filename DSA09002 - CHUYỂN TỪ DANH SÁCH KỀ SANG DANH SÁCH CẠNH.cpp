#include<bits/stdc++.h>
 
using namespace std;

vector<pair<int, int>> edge;

void TC(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string num;
		while(ss >> num){
			if(stoi(num) > i){
				edge.push_back({i, stoi(num)});
			}
		}
	}
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
