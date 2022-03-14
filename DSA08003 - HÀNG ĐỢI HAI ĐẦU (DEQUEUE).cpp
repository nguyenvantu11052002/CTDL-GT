#include<bits/stdc++.h>
 
using namespace std;
deque<int> dq;
string s;
int x, n;

void TC(){
	cin >> n;
	while(n--){
		cin >> s;
		if(s == "PUSHFRONT"){
			cin >> x;
			dq.push_front(x);
		}
		else if(s == "PRINTFRONT"){
			if(dq.empty()){
				cout << "NONE" << endl;
			}
			else cout << dq.front() << endl;
		}
		else if(s == "POPFRONT"){
			if(dq.size()){
				dq.pop_front();
			}
		}
		else if(s == "PUSHBACK"){
			cin >> x;
			dq.push_back(x);
		}
		else if(s == "PRINTBACK"){
			if(dq.empty()){
				cout << "NONE" << endl;
			}
			else cout << dq.back() << endl;
		}
		else if(s == "POPBACK"){
			if(dq.size()){
				dq.pop_back();
			}
		}
	}
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



