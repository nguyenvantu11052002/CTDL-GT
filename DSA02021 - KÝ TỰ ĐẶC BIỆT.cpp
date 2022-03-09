#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	string s;
	long long n;
	cin >> s >> n;
	long long s1 = s.size();
	while(s1 < n){
		s1 *= 2;
	}
	while(n > s.size()){
		if(n <= s1/2);
		else{
			if(n == s1/2 + 1){
				n = s1/2;
			}
			else n = n - s1/2 - 1;
		}
		s1 /= 2;
	}
	cout << s[n - 1] << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

