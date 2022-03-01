#include<bits/stdc++.h>
 
using namespace std;
int k;
string s;

bool cmp(pair<char, int> a, pair<char, int> b){
	if(a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

void TC(){
	cin >> k >> s;
	int n = s.size();
	int buocnhay = 1;
	for(int i = 0; i < n - 1; i += buocnhay){
		char c = s[i];
		int chiso = i;
		for(int j = i + 1; j < n; j++){
			if(s[j] > c){
				c = s[j];
				chiso = j;
			}
		}
		//cout << "c va chi so : " << c << " " << chiso << endl;
		if(c == s[i]){
			buocnhay = 1;
			continue;
		}
		else{
			int dem = 0;
			for(int j = i + 1; j < n; j++){ // 4 5 6 7 7; false; dem = 2;
				if(s[j] == c) dem++;        // 5 4 6 7 7; true; dem = 2;
			}
			buocnhay = dem;
			if(k == 0) break;
			if(dem == 1){
				swap(s[i], s[chiso]);
				k--;
				//cout << "if dem == 1 giam ne : " << "doi cho " << i << " voi " << chiso << endl;
			}
			else{
				vector<pair<char, int> > pa;
				for(int j = i; j < i + dem; j++){
					pa.push_back({s[j], j});
				}
				sort(pa.begin(), pa.end(), cmp);
//				for(auto x : pa){
//					cout << "PAAAAAA ne: " << x.first << " " << x.second << endl;
//				}
//				cout << "het PAAAAAA " << endl;
				for(int j = 0; j < pa.size(); j++){
					if(k == 0) break;
					for(int l = i + dem; l < n; l++){
						if(s[l] == c){
							swap(s[pa[j].second], s[l]);
							k--;
							//cout << "trong for giam ne : " << "doi cho " << pa[j].second << " voi " << l << endl;
							break;
						}
					}
				}
			}
		}
	}
	cout << s << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
	


