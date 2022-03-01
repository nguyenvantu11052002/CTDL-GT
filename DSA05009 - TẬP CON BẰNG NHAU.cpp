#include<bits/stdc++.h>
 
using namespace std;
int n, a[105], sum, res, ok, cx[105];

void Try(int i, int sum){
	for(int j = 1; j <= n; j++){
		if(cx[j] == 0 && ok == 0){
			sum += a[j];
			cx[j] = 1;
			if(sum == res/2){
				ok = 1;
				return;
			}
			else if(sum < res/2){
				 Try(i + 1, sum);
			}
			sum -= a[j];
			cx[j] = 0;
		}
	}
}

void TC(){
	cin >> n;
	res = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		res += a[i];
	}
	if(res % 2){
		cout << "NO" << endl;
		return;
	}
	ok = 0;
	memset(cx, 0, sizeof(cx));
	Try(1, 0);
	if(ok){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	


