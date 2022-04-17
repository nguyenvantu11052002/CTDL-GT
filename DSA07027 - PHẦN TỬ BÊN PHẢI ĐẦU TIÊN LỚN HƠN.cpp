#include<bits/stdc++.h>

using namespace std;

void TC(){	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int r[n];
	stack<int> st;
	for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && a[i] >= st.top()){
			st.pop();
		}
		if(st.empty()) r[i] = -1;
		else r[i] = st.top();
		st.push(a[i]);
	}
	for(int i = 0; i < n; i++){
		cout << r[i] << " ";
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
 
