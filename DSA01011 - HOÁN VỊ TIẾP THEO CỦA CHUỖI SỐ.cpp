#include<bits/stdc++.h>
 
using namespace std;

int n;
string s;

void sinh(){
	int i = s.size() - 2;
	while(i >= 0 && s[i] >= s[i + 1]){
		i--;
	}
	if(i == -1){
		cout << n << " BIGGEST" << endl;
	}
	else{
		int j = s.size() - 1;
		while(s[i] >= s[j]) j--;
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
		cout << n << " " << s << endl;
	}
}

void TC(){
	cin >> n >> s;
	sinh();
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

