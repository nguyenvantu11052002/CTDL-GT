#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	string s;
	cin >> s;
	int n = s.size();
	int dem[256] = {0};
	for(int i = 0; i < n; i++){
		dem[s[i]]++;
	}
	int maxx = 0;
	for(int i = 0; i < 256; i++){
		maxx = max(maxx, dem[i]);
	}
	int kitukhac = n - maxx;
	if(kitukhac >= maxx - 1){
		cout << 1 << endl;
	}
	else{
		cout << -1 << endl;
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
