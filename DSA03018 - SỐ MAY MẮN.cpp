#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int nbandau = n;
	int k = n / 7;
	int du = n % 7;
	if(du == 0){ // toan so 7
		for(int i = 1; i <= k; i++){
			cout << 7;
		}
		cout << endl;
		return;
	}
	while(n > 7){ 
		n -= 7;     
	}                
	// sau while tren neu co thi chi co 1 con 4 o dau;
	int ok = 0;
	while(n <= nbandau){
		if(n % 4 == 0){
			ok = 1;
			break;
		}
		else{
			n += 7;
		}
	}
	if(ok){
		int demconso4 = n / 4;
		int demconso7 = (nbandau - n) / 7;
		for(int i = 1; i <= demconso4; i++){
			cout << 4;
		}
		for(int i = 1; i <= demconso7; i++){
			cout << 7;
		}
		cout << endl;
	}
	else{
		cout << -1 << endl;
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	



