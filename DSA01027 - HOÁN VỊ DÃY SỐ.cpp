#include<bits/stdc++.h>
 
using namespace std;

int n, a[15], x[15], cx[15];

void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = i;
	}
}

void inkq(){
	for(int i = 1; i <= n; i++){
		cout << a[x[i]] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cx[j] == 0){
			cx[j] = 1;
			x[i] = j;
			if(i == n){
				inkq();
			}
			else Try(i + 1);
			cx[j] = 0;
		}
	}
}

void TC(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	ktao();
	memset(cx, 0, sizeof(cx));
	Try(1);
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

	

	
