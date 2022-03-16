#include<bits/stdc++.h>
 
using namespace std;

string s;

bool siladau(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/') return true;
	return false;
}

void TC(){
	cin >> s;
	stack<string> st;
	for(int i = s.size() - 1; i >= 0; i--){
		if(siladau(s[i])){
			string s1 = st.top();
			st.pop();
			string s2 = st.top();
			st.pop();
			string them = s1 + s2 + s[i];
			st.push(them);
		}
		else st.push(string(1, s[i]));
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	cout << endl;
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
	



