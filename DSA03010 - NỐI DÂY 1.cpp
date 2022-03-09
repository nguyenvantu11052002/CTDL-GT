#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	priority_queue<long long, vector<long long>, greater<long long> > p;
	long long n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		p.push(a[i]);
	}
	long long res = 0;
	while(p.size() > 1){
		long long d = p.top();
		p.pop();
		long long k = p.top();
		p.pop();
		long long sotaora = d + k;;
		res += sotaora;
		p.push(sotaora);
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

