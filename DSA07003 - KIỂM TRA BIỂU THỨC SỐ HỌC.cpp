#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	string s;
	getline(cin, s);
	int n = s.size();
	stack<char> st;
	int ok;
	for(int i = 0; i < n; i++){
		if(s[i] != ')'){
			st.push(s[i]);
		}
		else{
			ok = 0;
			while(!st.empty()){
				char c = st.top(); st.pop();
				if(c == '+' || c == '-' || c == '*' || c == '/'){
					ok = 1;
				}
				if(c == '(') break;
			}
			if(ok == 0){
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "No" << endl;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--){
		TC();
	}
	return 0;
}
	





