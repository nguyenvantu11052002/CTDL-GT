#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	queue<string> q;
	q.push("9");
	while(1){
		string s1 = q.front();
		q.pop();
		long long d = stoll(s1);
		if(d % n == 0){
			cout << s1 << endl;
			return;
		}
		q.push(s1 + "0");
		q.push(s1 + "9");
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
