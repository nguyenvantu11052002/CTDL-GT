#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int l = n/2, r = n;
	int res = n;
	while(l >= 1 && r > n/2){
		if(a[r] >= 2 * a[l]){
			res--;
			l--;
			r--;
		}
		else{
			l--;
		}
	}
	cout << res << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



