#include<bits/stdc++.h>
 
using namespace std;

string s;
stack<string> st;

bool siladau(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/') return true;
	return false;
}

void tientosangtrungto(){
	for(int i = s.size() - 1; i >= 0; i--){
		if(siladau(s[i])){
			string s1 = st.top();
			st.pop();
			string s2 = st.top();
			st.pop();
			string them = "(" + s1 + s[i] + s2 + ")";
			st.push(them);
		}
		else st.push(string(1, s[i]));
	}
	string res = "";
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	s = res;
}

void trungtosanghauto(){
	for(int i = s.size() - 1; i >= 0; i--){ // (A + B) 
		if(s[i] == '('){
			string s1 = st.top();
			st.pop();
			string s2 = st.top();
			st.pop();
			string s3 = st.top();
			st.pop();
			string them = s1 + s3 + s2;
			st.push(them);
		}
		else if(s[i] == ')'){
			continue;
		}
		else st.push(string(1, s[i]));
	}
}

void inra(){
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	cout << endl;
}

void TC(){
	cin >> s;
	tientosangtrungto();
	trungtosanghauto();
	inra();
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
