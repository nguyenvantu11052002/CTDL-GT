#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int d;
	string s;
	cin >> d >> s;
	int n = s.size();
	int dem[256] = {0};
	for(int i = 0; i < n; i++){
		dem[s[i]]++;
	}
	int maxx = *max_element(dem, dem + 256);
	//cout << "maxx ne " << maxx << endl;
	int sumktconlai = n - maxx;
	int soktmoikhe = sumktconlai / (maxx - 1); // maxx - 1 la cac khe; nhet kin cac khe;
	if(soktmoikhe >= d - 1){
		cout << 1 << endl;
	} 
	else cout << -1 << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}


