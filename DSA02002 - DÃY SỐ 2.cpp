#include<bits/stdc++.h>
 
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<string> v;
	string s1 = "[";
	for(int i = 0; i < n; i++){
		s1 += to_string(a[i]);
		if(i != n - 1) s1 += " ";
	}
	s1 += "]";
	v.push_back(s1);
	int stop = n - 1;
	string s;
	while(stop--){
		s = "[";
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i] + a[i + 1];
		}
		for(int i = 0; i < n - 1; i++){
			s += to_string(a[i]);
			if(i != n - 2) s += " ";
		}
		s += "]";
		v.push_back(s);
		n--;
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << " ";
	}
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

