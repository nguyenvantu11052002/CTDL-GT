#include<bits/stdc++.h>
 
using namespace std;

int n, ok;
long long a[505] = {0};
vector<long long> res;
void sinh(string &s){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		i--;
	}
	if(i == -1){
		ok = 0;
	}
	else{
		s[i] = '9';
	}
}

void init(){ 
	string s(13, '0');
	ok = 1;
	sinh(s); // bo qua 0000000000000;
	while(ok){
		res.push_back(stoll(s));
		sinh(s);
	}
	res.push_back(stoll(s));
	for(int i = 1; i <= 500; i++){
		for(auto x : res){
			if(a[i] == 0 && x % i == 0){
				a[i] = x;
				break;
			}
		}
	}
}

void TC(){
	cin >> n;
	cout << a[n] << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	init();
	while(t--){
		TC();
	}
	return 0;
}
	

