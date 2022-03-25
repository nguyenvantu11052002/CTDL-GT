#include<bits/stdc++.h>
 
using namespace std;

bool check(char a, char b){
	if(a == '(' && b == ')') return true;
	if(a == '[' && b == ']') return true;
	if(a == '{' && b == '}') return true;
	return false;
}

void TC(){
	string s;
	cin >> s;
	stack<char> st;
	int n = s.size();
	int ok = 1;
	for(int i = 0; i < n; i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			st.push(s[i]);
		}
		else{
			// gap ngoac dong ma trong st rong cmnr thi la sai ngoac sai, gap ngoac dong roi ngoac mo o dau ma doi dung ?
			if(st.empty()){
				ok = 0;
				break;
			}
			char c = st.top();
			st.pop();
			if(check(c, s[i]) == false){
				ok = 0;
				break;
			}
		}
	}
	if(ok){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
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
	





