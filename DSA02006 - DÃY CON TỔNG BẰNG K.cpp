#include<bits/stdc++.h>
 
using namespace std;
int n, k, a[15], b[15], ok;
void Try(int i, int chisoin, int S){ // mang b[] la mang de in ket qua;
	for(int j = i + 1; j < n; j++){
		if(S + a[j] == k){
			ok = 1;
			b[chisoin] = a[j];
			cout << "[";
			for(int l = 0; l <= chisoin; l++){
				cout << b[l];
				if(l != chisoin) cout << " ";
			}
			cout << "] ";
			return;
		}
		else if(S + a[j] < k && i < n - 1){
			b[chisoin] = a[j];
			chisoin++;
			S += a[j];
			Try(j, chisoin, S);
			chisoin--;
			S -= a[j];
		}
	}
}
 
void inraketqua(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	ok = 0;
	Try(-1, 0, 0);
	if(ok == 0){
		cout << -1 << endl;
		return;
	}
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
	

