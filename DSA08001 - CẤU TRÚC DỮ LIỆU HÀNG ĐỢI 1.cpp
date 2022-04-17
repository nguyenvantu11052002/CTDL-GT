#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	queue<int> q;
	int s;
	int x;
	while(n--){
		cin >> s;
		if(s == 1){
			cout << q.size() << endl;
		}
		else if(s == 2){
			if(q.empty()){
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
		else if(s == 3){
			cin >> x;
			q.push(x);
		}
		else if(s == 4){
			if(!q.empty()){
				q.pop();
			}
		}
		else if(s == 5){
			if(q.empty()){
				cout << -1 << endl;
			}
			else cout << q.front() << endl;
		}
		else{
			if(q.empty()){
				cout << -1 << endl;
			}
			else cout << q.back() << endl;
		}
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
