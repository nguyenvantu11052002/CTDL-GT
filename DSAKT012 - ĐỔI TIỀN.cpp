#include<bits/stdc++.h>
 
using namespace std;

int n, S, a[35],  res, ok;

void Try(int i, int cnt, long long sum){	
	for(int j = 1; j >= 0; j--){
		if(j){
			sum += a[i];
			cnt++;
		}
		if(sum >= S || i == n || cnt > res){
			if(sum == S){
				ok = 1;
				res = min(res, cnt);
			}
		}
		else if(sum < S) Try(i + 1, cnt, sum);
		if(j){
			sum -= a[i];
			cnt--;
		} 
	}
}

void TC(){
	cin >> n >> S;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	//sort(a + 1, a + n + 1, greater<int>());
	res = 35;
	ok = 0;
	Try(1, 0, 0);
	if(ok == 0){
		cout << -1;
	}
	else cout << res;
	cout << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

	

	
