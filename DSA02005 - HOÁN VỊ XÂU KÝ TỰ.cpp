#include<bits/stdc++.h>
 
using namespace std;

int chuaxet[15];
int x[15];
string s;

void inkq(){
	for(int i = 0; i < s.size(); i++){
		cout << s[x[i]];
	}
	cout << " ";
}

void sinh(int i){
	for(int j = 0; j < s.size(); j++){
		if(chuaxet[j]){
			x[i] = j;
			chuaxet[j] = 0;
			if(i == s.size() - 1){
				inkq();
			}
			else sinh(i + 1);
			chuaxet[j] = 1;
		}
	}
}

void inraketqua(){
	memset(chuaxet, 1, sizeof(chuaxet));
	cin >> s;
	sinh(0);
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

