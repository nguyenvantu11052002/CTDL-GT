#include<bits/stdc++.h>
 
using namespace std;
int n, x[15], cx[15];
int res, ans;
string s[15];

int sktt(string a, string b){
	int i = 0, j = 0, cnt = 0;
	while(i < a.size() && j < b.size()){
		if(a[i] == b[j]){
			cnt++;
			i++; j++;
		}
		else if(a[i] < b[j]){
			i++;
		}
		else j++;
	}
	return cnt;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cx[j] == 0){
			cx[j] = 1;
			x[i] = j;
			res += sktt(s[x[i]], s[x[i - 1]]);
			if(i == n && res < ans){
				ans = res;
			}
			else if(i < n && res < ans){
				Try(i + 1);
			}
			cx[j] = 0;
			res -= sktt(s[x[i]], s[x[i - 1]]);
		}
	}
}

void TC(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> s[i];
	}
	memset(cx, 0, sizeof(cx));
	ans = INT_MAX;
	res = 0;
	s[0] = "";
	x[0] = 0;
	Try(1);
	cout << ans << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



