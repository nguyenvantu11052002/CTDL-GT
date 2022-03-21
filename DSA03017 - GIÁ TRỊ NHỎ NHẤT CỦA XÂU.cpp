#include<bits/stdc++.h>
 
using namespace std;

// y tuong la xoa di ki tu co so lan xuat hien nhieu nhat; 

void TC(){
	int k;
	cin >> k;
	string s;
	cin >> s;
	int n = s.size();
	int dem[256] = {0};
	for(int i = 0; i < n; i++){
		dem[s[i]]++;
	}
	priority_queue<int> q;
	for(int i = 0; i < n; i++){
		if(dem[s[i]]){
			q.push(dem[s[i]]);
			dem[s[i]] = 0;
		}
	}
	while(k--){
		int them = q.top() - 1;
		q.pop();
		q.push(them);
	}
	long long res = 0;
	while(!q.empty()){
		int them = q.top() * q.top();
		q.pop();
		res += them;
	}
	cout << res << endl;
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
	



