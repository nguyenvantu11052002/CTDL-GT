#include<bits/stdc++.h>
 
using namespace std;
const long long m = 1e9 + 7;
void TC(){
	long long n;
	cin >> n;
	long long a[n];
	priority_queue<long long, vector<long long>, greater<long long> > p;
	long long res = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		p.push(a[i]);
	}
	while(p.size() > 1){
		long long a1 = p.top();
		p.pop();
		long long a2 = p.top();
		p.pop();
		res += a1;
		res %= m;
		res += a2;
		res %= m;
		long long them = (a1 + a2) % m;
		p.push(them);
	}
	cout << res << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



