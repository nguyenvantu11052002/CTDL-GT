#include<bits/stdc++.h>

using namespace std;

void TC(){
	int n;
	cin >> n;
	queue<string> q;
	q.push("1");
	while(n--){
		string s1 = q.front();
		q.pop();
		cout << s1 << " ";
		q.push(s1 + "0");
		q.push(s1 + "1");
	}
	cout << endl;
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
