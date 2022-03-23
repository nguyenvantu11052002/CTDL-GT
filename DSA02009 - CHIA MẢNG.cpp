#include<bits/stdc++.h>
 
using namespace std;

int n, k, vs[20], a[20], S, ok;

void Try(int sum, int cnt){
	if(ok){
		return;
	}
	if(cnt == k){
		ok = 1;
		return;
	}
	for(int i = 0; i < n; i++){
		if(vs[i] == 0){
			vs[i] = 1;
			if(sum + a[i] == S){
				Try(0, cnt + 1);
			}
			else if(sum + a[i] < S){
				Try(sum + a[i], cnt);
			}
			vs[i] = 0;
		}
	}
}

void TC(){
	ok = 0;
	S = 0;
	cin >> n >> k;
	memset(vs, 0, sizeof(vs));
	for(int i = 0; i < n; i++){
		cin >> a[i];
		S += a[i];
	}
	if(S % k){
		cout << 0 << endl;
		return;
	}
	S /= k;
	Try(0, 0);
	if(ok){
		cout << 1 << endl;
	}
	else cout << 0 << endl;
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
