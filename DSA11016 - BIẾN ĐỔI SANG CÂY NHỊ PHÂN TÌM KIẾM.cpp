#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n;
	cin >> n;
	int a, b; char c;
	set<int> se;
	while (n--) {
		cin >> a >> b >> c;
		se.insert(a);
		se.insert(b);
	}
	for (auto x : se) {
		cout << x << " ";
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
