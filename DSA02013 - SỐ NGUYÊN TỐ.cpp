#include<bits/stdc++.h>
 
using namespace std;

int prime[1000001];
int a[110], x[105];
int cnt, h, n, p, s;
vector<string> v;
void sangnto(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){
			for(int j = i * i; j <= 1000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

void mangnto(){
	int l = 1;
	h = 0;
	for(int i = p + 1; i <= s - 1; i++){
		if(prime[i]){
			a[l++] = i;
			h++;
		}
	}
}

void solve(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[x[i]];
	}
	if(sum == s){
		string ss = "";
		for(int i = 1; i <= n; i++){
			ss += to_string(a[x[i]]);
			if(i != n) ss += " ";
		}
		v.push_back(ss);
	}
}

void Try(int i){
	for(int j = x[i - 1] + 1; j <= h - n + i; j++){
		x[i] = j;
		if(i == n){
			solve();
		}
		else Try(i + 1);
	}
}

void TC(){
	cnt = 0;
	cin >> n >> p >> s;
	memset(x, 0, sizeof(x));
	mangnto();
	// to hop chap n cua h ; voi h la so cac so nguyen to tu sau P den truoc S;
	Try(1);
	cout << v.size() << endl;
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << endl;
	}
	v.clear();
}

int main(){
	int t = 1;
	cin >> t;
	sangnto();
	while(t--){
		TC();
	}
	return 0;
}
