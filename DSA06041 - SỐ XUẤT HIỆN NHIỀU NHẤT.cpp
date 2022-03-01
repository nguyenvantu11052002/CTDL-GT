#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	int chiso = 0;
	for(auto x : mp){
		if(x.second > chiso) chiso = x.second;
	}
	if(chiso <= n/2){
		cout << "NO" << endl;
		return;
	}
	for(auto x : mp){
		if(x.second == chiso){
			cout << x.first << endl;
		}
	}
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
