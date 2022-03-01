#include<bits/stdc++.h>
 
using namespace std;

int n, ok, cnt, res, a[15];
vector<string> v;
void ktao(){
	cnt = 1;
	a[1] = n;
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		res++;
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if(q){
			for(int j = 1; j <= q; j++){
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(r){
			cnt++;
			a[cnt] = r;
		}
	}
}

void inkq(){
	string s = "(" + to_string(a[1]);
	for(int i = 2; i <= cnt; i++){
		s += " " + to_string(a[i]);
	}
	s += ")";
	v.push_back(s);
}

void TC(){
	cin >> n;
	ktao();
	ok = 1;
	res = 1;
	while(ok){
		inkq(); // goi ham in kq thi in ra 2 1 1 1;
		sinh(); // buoc sinh cuoi cung thi ok no van chua = 0; goi ham sinh thi sinh ra 1 1 1 1 1; ok van dang = 1 nha;
	}
	cout << res << endl;
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
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
	


