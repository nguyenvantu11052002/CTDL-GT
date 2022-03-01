#include<bits/stdc++.h>
 
using namespace std;
int n, k, cnt, ok;
int a[45];
set<int> se;

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 1;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
		for(int j = 1; j <= k; j++){
			if(se.find(a[j]) == se.end()) cnt++;
		}
	}
}

void TC(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	ok = 0;
	cnt = 0;
	sinh();
	if(ok){
		cout << k << endl;
	}
	else cout << cnt << endl;
	se.clear();
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

