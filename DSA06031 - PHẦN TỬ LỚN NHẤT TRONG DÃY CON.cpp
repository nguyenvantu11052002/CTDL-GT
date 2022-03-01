#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n, k;
	cin >> n >> k;
	int a[n];
	multiset<int> ms;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < k; i++){
		ms.insert(a[i]);
	}
	for(int i = k; i < n; i++){
		cout << *ms.rbegin() << " ";
		ms.insert(a[i]);
		ms.erase(ms.find(a[i - k]));
	}
	cout << *ms.rbegin() << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
