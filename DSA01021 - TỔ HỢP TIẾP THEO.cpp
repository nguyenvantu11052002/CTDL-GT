#include<bits/stdc++.h>
 
using namespace std;

int ok, a[105], b[105], n, k;  // 1011
                               // 1100

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 1;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

void inraketqua(){
	cin >> n >> k;
	ok = 0;
	map<int, int> mp;
	for(int i = 1; i <= k; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	sinh();
	if(ok){
		cout << k << endl;
		return;
	}
	int cnt = 0;
	for(int i = 1; i <= k; i++){
		mp[a[i]]++;
	}
	for(auto x : mp){
		if(x.second == 2) cnt++; // cnt la dem cac phan tu da xuat hien trong mang a[] ban dau ( cac phan tu cu~);
	}
	cout << k - cnt << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
