#include<bits/stdc++.h>
 
using namespace std;

long long sotrongq(deque<int> q){
	long long res = 0;
	while(!q.empty()){
		res = res * 10 + q.back();
		q.pop_back();
	}
	return res;
}

void TC(){
	deque<int> q;
	int n;
	cin >> n;
	q.push_front(1);
	while(1){
		if(sotrongq(q) % n == 0){
			cout << sotrongq(q) << endl;
			return;
		}
		int dem = 0;
		while(q.front() == 1){
			q.pop_front();
			dem++;
		}
		if(q.size() == 0){
			q.push_front(1);
			for(int j = 1; j <= dem; j++){
				q.push_front(0);
			}
		}
		else{
			q.pop_front();
			q.push_front(1);
			for(int j = 1; j <= dem; j++){
				q.push_front(0);
			}
		}
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



