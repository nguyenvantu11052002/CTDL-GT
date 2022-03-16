#include<bits/stdc++.h>
 
using namespace std;

void solve(stack<int> st){
	vector<int> a;
	while(!st.empty()){
		a.push_back(st.top());
		st.pop();
	}
	reverse(a.begin(), a.end());
	if(a.size() == 0){
		cout << "empty" << endl;
	}
	else{
		for(auto x : a){
			cout << x << " ";
		}
		cout << endl;
	}
}

void TC(){
	string s;
	int x;
	stack<int> st;
	while(cin >> s){
		if(s == "push"){
			cin >> x;
			st.push(x);
		}
		else if(s == "pop"){
			if(st.size() > 0){
				st.pop();
			}
		}
		else if(s == "show"){
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
	



