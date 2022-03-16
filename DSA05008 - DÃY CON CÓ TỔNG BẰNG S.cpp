#include<bits/stdc++.h>
 
using namespace std;

int n, s, a[205];

bool sovle(){
	int check[s] = {0}; // check[i] == 1 : xuat hien day con co tong == i trong day so da cho va nguoc lai; de thay moi check[a[i]] deu = 1;
	check[0] = 1;
	for(int i = 0; i < n; i++){
		for(int j = s; j >= a[i]; j--){
			if(check[j - a[i]]) check[j] = 1;
		}
	}
	return check[s] == 1;
}

void TC(){
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(sovle()){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	



