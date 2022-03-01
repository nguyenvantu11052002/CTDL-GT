#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l, r;
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1]){
			l = i;
			break;
		}
	}
	for(int i = n - 1; i >= 1; i--){
		if(a[i] < a[i - 1]){
			r = i;
			break;
		}
	}
	int maxx = *max_element(a + l, a + r + 1);
	int minn = *min_element(a + l, a + r + 1);
	//cout << maxx << " " << minn << endl;
	for(int i = 0; i < n - 1; i++){
		if(minn < a[i]){
			l = i;
			break;
		}
	}
	for(int i = n - 1; i >= 1; i--){
		if(maxx > a[i]){
			r = i;
			break;
		}
	}
	cout << l + 1 << " " << r + 1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
