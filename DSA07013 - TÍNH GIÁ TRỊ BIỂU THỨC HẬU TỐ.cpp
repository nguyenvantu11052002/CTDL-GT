#include<bits/stdc++.h>
 
using namespace std;

string s;

bool siladau(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/') return true;
	return false;
}

int solve(int s1, int s2, char c){
	if(c == '+') return s1 + s2;
	if(c == '-') return s1 - s2;
	if(c == '*') return s1 * s2;
	return s1 / s2;
}

void TC(){
	// note : trung sang hau thi duyet tu cuoi day ve dau day, hau sang trung thi duyet tu dau day den cuoi day;
	// chieu duyet nguoc voi chieu muon chuyen;
	cin >> s;
	stack<int> st;
	for(int i = 0; i < s.size(); i++){ // ((A-(B/C))*((A/K)-L);
		if(siladau(s[i])){             // ABC/-AK/L-*  ;
			int s1 = st.top();
			st.pop();
			int s2 = st.top();
			st.pop();
			int them = solve(s2, s1, s[i]);
			st.push(them);
		}
		else{
			st.push(s[i] - '0');
		}
	}
	cout << st.top() << endl;
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
	



