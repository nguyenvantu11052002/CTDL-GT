#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x;
	cin >> x;
	for(int i = 0; i < n; i++){
		if(a[i] == x) a[i] = -1;
	}
	for(int i = 0; i < n; i++){
		if(a[i] >= 0){
			cout << a[i] << " ";
		}
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
