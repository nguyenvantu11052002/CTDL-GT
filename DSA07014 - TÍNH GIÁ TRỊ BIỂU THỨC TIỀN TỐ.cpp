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
	cin >> s;
	stack<int> st;
	int res = 0;
	for(int i = s.size() - 1; i >= 0; i--){
		if(siladau(s[i])){
			int s1 = st.top();
			st.pop();
			int s2 = st.top();
			st.pop();
			int them = solve(s1, s2, s[i]);
			res += them;
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
	



