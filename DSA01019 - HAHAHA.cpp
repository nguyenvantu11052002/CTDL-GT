#include<bits/stdc++.h>
 
using namespace std;

int ok, a[105], b[105], n, k;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i] = 1;
	}
}

bool check(){ // H - 0 , A - 1;
	if(a[1]) return false;
	if(a[n] == 0) return false;
	for(int i = 1; i <= n - 1; i++){
		if(a[i] == 0 && a[i + 1] == 0) return false;
	} 
	return true;
}

void inraketqua(){
	cin >> n;
	ktao();
	ok = 1;
	vector<string> v;
	while(ok){
		if(check()){
			string s = "";
			for(int i = 1; i <= n; i++){
				if(a[i]) s += "A";
				else s += "H";
			}
			v.push_back(s);
		}
		sinh();
	}
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << endl;
	}
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
