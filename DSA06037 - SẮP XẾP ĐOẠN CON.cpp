#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int maxl[n], minr[n]; //2 1 3 5 4
	                      //2 2 3 5 5
	                      //1 1 3 4 4
	maxl[0] = a[0];
	for(int i = 1; i < n; i++){
		maxl[i] = max(maxl[i - 1], a[i]);
	}
	minr[n - 1] = a[n - 1];
	for(int i = n - 2; i >= 0; i--){
		minr[i] = min(minr[i + 1], a[i]);
	}
	vector<int> v;
	for(int i = 0; i < n - 1; i++){
		if(maxl[i] <= minr[i + 1]){
			v.push_back(i + 1);
		}
	}
	cout << v.size() << endl;
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	


