#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	// k la so cau hinh;
	int k = 1;
	for(int i = 1; i <= n; i++){
		k *= 2;
	}
	string s[k + 5];
	// n == 1 chi co 2 chuoi sau;
	s[1] = "0";
	s[2] = "1";
	// voi n > 1;
	if(n > 1){
		int t = 2; // t == 2 de lay doi xung qua t, bat dau t = 2 vi dau tien n > 1 hay n == 2 thi co 4 chuoi, 4 chuoi thi can t = 2 de lay doi xung;
		for(int i = 2; i <= n; i++){
			int l = 1;
			for(int j = 1; j <= i; j++){
				l *= 2;
			}
			// doi xung;
			for(int j = 1; j <= t; j++){
				s[l - j + 1] = "1" + s[j];
				s[j] = "0" + s[j];
			}
			t = l;
		}
	}
	for(int i = 1; i <= k; i++){
		cout << s[i] << " ";
	}
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	

