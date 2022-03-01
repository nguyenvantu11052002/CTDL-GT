#include<bits/stdc++.h>
 
using namespace std;
int n, k, s, a[105], ok, cnt;

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += a[i];
	}
	return sum == s;
}

void TC(int &t){
	cin >> n >> k >> s;
	if(n == 0 && k == 0 && s == 0){
		t = 0;
		return;
	}
	ktao();
	cnt = 0;
	ok = 1;
	while(ok){
		if(check()){
			cnt++;
		}
		sinh();
	}
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(1){
		cin >> n >> k >> s;
		if(n < k){
			cout << 0 << endl;
			continue;
		}
		if(n == 0 && k == 0 && s == 0){
			return 0;	
		}
		ktao();
		cnt = 0;
		ok = 1;
		while(ok){
			if(check()){
				cnt++;
			}
			sinh();
		}
		cout << cnt << endl;
	}
	return 0;
}
	

