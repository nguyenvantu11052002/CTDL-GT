#include<bits/stdc++.h>
 
using namespace std;

int n, x, a[25], b[25], ok;
vector<string> v;

void Try(int i, int chisoin, int sum){
	for(int j = i; j <= n; j++){
		sum += a[j];
		b[chisoin] = a[j];
		chisoin++;
		if(sum == x){
			string s = "[" + to_string(b[0]);
			for(int l = 1; l < chisoin; l++){
				s += " " + to_string(b[l]);
			}
			s += "]";
			v.push_back(s);
		}
		else if(sum < x){
			Try(j, chisoin, sum);
		}
		sum -= a[j];
		chisoin--;
	}
}

void TC(){
	cin >> n >> x;
	ok = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	Try(1, 0, 0);
	if(v.size() == 0){
		cout << -1 << endl;
		v.clear();
		return;
	}
	//sort(v.begin(), v.end());
	for(auto x : v){
		cout << x;
	}
	cout << endl;
	v.clear();
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
