#include<bits/stdc++.h>
 
using namespace std;

void solve(stack<int> st){
	if(st.size() == 0){
		cout << "NONE" << endl;
	}
	else{
		cout << st.top() << endl;
	}
}

void TC(){
	int n;
	cin >> n;
	string s;
	int x;
	stack<int> st;
	while(n--){
		cin >> s;	
		if(s == "PUSH"){
			cin >> x;
			st.push(x);
		}
		else if(s == "POP"){
			if(st.size() > 0){
				st.pop();
			}
		}
		else if(s == "PRINT"){
			solve(st);
		}
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	



