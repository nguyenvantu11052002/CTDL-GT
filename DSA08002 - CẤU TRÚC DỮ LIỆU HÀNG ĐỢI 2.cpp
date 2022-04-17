#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	queue<int> q;
	string s;
	int x;
	while(n--){
		cin >> s;
		if(s == "PUSH"){
			cin >> x;
			q.push(x);
		}
		else if(s == "PRINTFRONT"){
			if(q.empty()){
				cout << "NONE" << endl;
			}
			else{
				cout << q.front() << endl;
			}
		}
		else{
			if(!q.empty()){
				q.pop();
			}
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
