#include<bits/stdc++.h>
 
using namespace std;

int n, s, m;


void TC(){
	cin >> n >> s >> m;
	int songaymua = s - s/7;
	int sanluongtieuthu = s * m;
	for(int i = 1; i <= songaymua; i++){
		int sanluongdangco = 0;
		sanluongdangco += n * i;
		if(sanluongdangco >= sanluongtieuthu){
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
