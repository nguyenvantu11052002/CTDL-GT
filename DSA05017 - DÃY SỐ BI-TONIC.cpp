#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l[n], r[n];
	for(int i = 0; i < n; i++){
		l[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				l[i] = max(l[i], l[j] + a[i]);
			}
		}
	} 
	for(int i = n - 1; i >= 0; i--){
		r[i] = a[i];
		for(int j = n - 1; j > i; j--){
			if(a[i] > a[j]){
				r[i] = max(r[i], r[j] + a[i]);
			}
		}
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		res = max(res, r[i] + l[i] - a[i]);
	}
	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
