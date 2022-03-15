#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	stack<string> st;
	string token;
	while(ss >> token){
		st.push(token);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}

int main(){
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--){
		TC();
	}
	return 0;
}



