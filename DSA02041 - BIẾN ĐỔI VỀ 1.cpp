#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	queue<pair<int, int> > q;
	q.push({n, 0});
	while(1){
		pair<int, int> p = q.front();
		q.pop();
		if(p.first == 1){
			cout << p.second << endl;
			return;
		}
		if(p.first % 3 == 0){
			q.push({p.first/3, p.second + 1});
			//continue;
		}
		//TH2;
		q.push({p.first - 1, p.second + 1});
		// TH1;
		if(p.first % 2 == 0){
			q.push({p.first/2, p.second + 1});
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
	



