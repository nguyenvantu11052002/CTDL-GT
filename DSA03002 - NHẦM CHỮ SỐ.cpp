#include<bits/stdc++.h>
 
using namespace std;

long long nnx(long long x){
	string s = to_string(x);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '6') s[i] = '5';
	}
	long long res = stoll(s);
	return res;
}

long long lnx(long long x){
	string s = to_string(x);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '5') s[i] = '6';
	}
	long long res = stoll(s);
	return res;
}

long long minn(long long a, long long b){
	long long res = nnx(a) + nnx(b);
	return res;
}

long long maxx(long long a, long long b){
	long long res = lnx(a) + lnx(b);
	return res;
}

void TC(){
	long long a, b;
	cin >> a >> b;
	cout << minn(a, b) << " " << maxx(a, b) << endl;
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
