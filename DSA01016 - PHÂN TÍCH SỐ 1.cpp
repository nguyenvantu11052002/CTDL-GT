#include<bits/stdc++.h>
 
using namespace std;

int n, a[105], ok, cnt;

void ktao(){
	cnt = 1;
	a[1] = n; 
}

void in(){
	cout << "(" << a[1];
	for(int i = 2; i <= cnt; i++){
		cout << " " << a[i];
	}
	cout << ") ";
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if(q){
			for(int j = 1; j <= q; j++){
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(r){
			cnt++;
			a[cnt] = r;
		}
	}
}

void TC(){
	cin >> n;
	ktao();
	ok = 1;
	while(ok){
		in();
		sinh();
	}	
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

