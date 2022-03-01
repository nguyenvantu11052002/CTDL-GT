#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}
 
void TestCase(){
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    	mp[a[i]]++;
	}
	vector< pair <int, int> > pa;
	for(auto x : mp){
		pa.push_back({x.first, x.second});
	}
	sort(pa.begin(), pa.end(), cmp);
	for(auto x : pa){
		for(int i = 0; i < x.second; i++){
			cout << x.first << " ";
		}
	}
	cout << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int T = 1;
	cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
