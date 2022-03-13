#include<bits/stdc++.h>
 
using namespace std;

int a[10], x[10], cx[10], ok;
vector<int> v;

// 1 +;
// 2 -;
// 3 *;

bool check(){ // de y ki de bai co cac dau ngoac roi nen cu lam tu trai sang phai, khong phai nhan chia truoc cong tru sau dau, tu dung nghi phuc tap vcl, ngu; 
	int sum = a[x[1]];
	for(int i = 0; i < 4; i++){ // v index 0 1 2 3;
		if(v[i] == 1){           // a index 1 2 3 4 5;
			sum += a[x[i + 2]];   // dau tien la thao tac voi a2
		}
		else if(v[i] == 2){
			sum -= a[x[i + 2]];
		}
		else{
			sum *= a[x[i + 2]];
		}
	}
	return sum == 23;
}

void Tryhv(int i){
	for(int j = 1; j <= 5; j++){
		if(cx[j] == 0){
			cx[j] = 1;
			x[i] = j;
			if(i == 5){
				if(check()){
					ok = 1;
					return;
				}
			}
			else Tryhv(i + 1);
			cx[j] = 0;
		}
	}
}

void Try(){
	for(int j = 1; j <= 3; j++){
		v.push_back(j);
		if(v.size() == 4){
			Tryhv(1);
		}
		else if(v.size() < 4){
			Try();
		}
		v.pop_back();
	}
}

void TC(){
	for(int i = 1; i <= 5; i++){
		cin >> a[i];
	}
	ok = 0;
	memset(cx, 0, sizeof(cx));
	Try();
	if(ok){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	v.clear();
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}


