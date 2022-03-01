#include<bits/stdc++.h>
 
using namespace std;

long long f[55];

void init(){
	int sum = 0;
	for(int i = 1; i <= 3; i++){
		f[i] = sum + 1;
		sum += f[i];
	}
	for(int i = 4; i <= 50; i++){
		f[i] = f[i - 1] + f[i - 2] + f[i - 3];
	}
}

void TC(){
	int n;
	cin >> n;
	cout << f[n] << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	init();
	while(t--){
		TC();
	}
	return 0;
}
	



