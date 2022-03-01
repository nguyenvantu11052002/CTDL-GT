#include<bits/stdc++.h>
 
using namespace std;

int ok, a[25], n, k;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

void inraketqua(){
	cin >> n;
	ktao();
	ok = 1;
	vector<string> v;
	while(ok){
		string s;
		for(int i = 1; i <= n; i++){
			s += to_string(a[i]);
		}
		v.push_back(s);
		sinh();
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << " ";
	}
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
