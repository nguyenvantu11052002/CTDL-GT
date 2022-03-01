#include<bits/stdc++.h>
 
using namespace std;

int x[20];
int n, k;
vector<string> v;
void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = 0;
	}
}

bool check(){ // A - 1, B - 0;
	int dem = 0, res = 0;
	for(int i = 1; i <= n; i++){
		if(x[i]){
			dem++;
		}
		else{
			dem = 0;
		}
		if(dem > k) return false;
		if(dem == k) res++;
	}
	return res == 1;
}

void inkq(){ 
	if(check()){
		string s = "";
		for(int i = 1; i <= n; i++){
			if(x[i]) s += "A";
			else s += "B";
		}
		v.push_back(s);
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			inkq();
		}
		else Try(i + 1);
	}
}

void TC(){
	cin >> n >> k;
	Try(1);
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for(auto x : v){
		cout << x << endl;
	}
}
 
int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

