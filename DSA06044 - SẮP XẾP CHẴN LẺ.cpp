#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n], chan[n], le[n];
	int j = 0; int k = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i % 2 == 0){
			le[j++] = a[i];
		}
		else chan[k++] = a[i];
	}
	sort(chan, chan + k, greater<int> ());
	sort(le, le + j);
	for(int i = 0; i < n/2; i++){
		cout << le[i] << " " << chan[i] << " ";
	}
	if(n % 2) cout << le[n/2];
	cout << endl;
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
