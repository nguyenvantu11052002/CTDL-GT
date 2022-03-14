#include<bits/stdc++.h>
 
using namespace std;
   
void TC(){
	int s, d;
	cin >> s >> d;
	int n = d;
	stack<int> st;
	while(s > 9){
		st.push(9);
		s -= 9;
		d--;
	}
	st.push(s);
	if(d < 0){
		cout << - 1 << endl;
		return;
	}
	// d : so chu so con lai;
	if(d == 1 || d == 0){
		while(!st.empty()){
			int dinh = st.top(); // TH 20 3 : 299; hoac TH 27 3 : 999;
			st.pop();
			cout << dinh;
		}
		cout << endl;
		return;
	}
	// cac TH so chu so con lai >= 2;
	int k = st.top();
	st.pop();
	st.push(k - 1);
	while(n - st.size() > 1){
		st.push(0);
	}
	st.push(1);
	// in ra;
	while(!st.empty()){
		int dinh = st.top();
		st.pop();
		cout << dinh;
	}
	cout << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



