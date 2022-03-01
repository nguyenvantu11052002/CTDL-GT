#include<bits/stdc++.h>

using namespace std;
int x;
struct cap{
	int gt;
	int cs;
};
bool cmp(cap a, cap b){
	if(abs(x - a.gt) == abs(x - b.gt)) return a.cs < b.cs;
	return abs(x - a.gt) < abs(x - b.gt);
}

void TC(){
	int n;
	cin >> n >> x;
	cap a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].gt;
		a[i].cs = i;
	}
	sort(a, a + n, cmp);
	for(auto x : a){
		cout << x.gt << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
