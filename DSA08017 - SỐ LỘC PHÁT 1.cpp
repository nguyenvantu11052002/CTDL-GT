#include<bits/stdc++.h>
 
using namespace std;

vector<long long> res;

void themsotrongq(deque<int> q){
	long long sum = 0;
	while(!q.empty()){
		int d = q.back();
		sum = sum * 10 + d;
		q.pop_back();
	}
	res.push_back(sum);
}

void TC(){
	deque<int> q;
	int n;
	cin >> n;
	q.push_front(6);
	while(q.size() <= n){
		themsotrongq(q);
		int dem = 0;
		while(q.front() == 8 && q.size() > 0){
			q.pop_front();
			dem++;
		}
		//cout << "dem ne " << dem << endl;
		if(q.size() == 0){
			for(int j = 1; j <= dem + 1; j++){
				q.push_front(6);
			}
		}
		else{
			q.pop_front();
			q.push_front(8);
			for(int j = 1; j <= dem; j++){
				q.push_front(6);
			}
		}
	}
	//cout << res.size() << endl;
	sort(res.begin(), res.end(), greater<long long> ());
	for(int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}
	cout << endl;
	res.clear();
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
	



