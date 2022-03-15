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
	long long n;
	cin >> n;
	deque<int> q;
	q.push_front(1);
	long long cnt = 0;
	while(sotrongq(q) <= n){ // 1011 -> 1100; viet khoang 13 so dau tien ra thi thay quy luat nhu sinh np; tim so 0 dau tien sau do thay = so 1 roi dau het doan dang sau thanh so 0;
		cnt++;
		// tao ra so tiep theo;
		int dem = 0; // dem so luong so 1 da bo qua;
		while(q.front() == 1){
			q.pop_front();
			dem++;
		}
		// co 2 TH;
		// TH1 la q.empty() tuc la so dang truoc dang xet toan la so 1 : 1111 -> 10000;
		if(q.size() == 0){
			q.push_front(1);
			for(int j = 1; j <= dem; j++){
				q.push_front(0);
			}
		}
		// TH2 q.size() != 0 , tuc la tim duoc so 0 de thay the; q.front() khi nay = 0;
		else{
			q.pop_front(); // xoa so 0;
			q.push_front(1); // thay bang so 1;
			for(int j = 1; j <= dem; j++){
				q.push_front(0); // thay nhung so 1 da bo qua thanh so 0;
			}
		}
	}
	cout << cnt << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}



