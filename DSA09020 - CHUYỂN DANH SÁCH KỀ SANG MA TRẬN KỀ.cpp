#include<bits/stdc++.h>
 
using namespace std;

int a[1001][1001];

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
			a[i][stoi(num)] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
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
