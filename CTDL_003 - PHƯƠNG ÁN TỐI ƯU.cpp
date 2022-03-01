#include<bits/stdc++.h>
 
using namespace std;

int n, W, V, v[105], w[105], x[105], res, kq[105];

void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = 0;
	}
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		x[i] = j; 
		V += v[i] * x[i];
		W -= w[i] * x[i];
		if(i == n){
			if(W >= 0 && V > res){
				res = V;
				for(int k = 1; k <= n; k++){
					kq[k] = x[k];
				}
			}
		}
		else if(V + double(v[i + 1] * W /w[i + 1]) > res) Try(i + 1);  
		V -= v[i] * x[i];
		W += w[i] * x[i];
	}
}

void TC(){
	cin >> n >> W;
	int mangin[105];
	for(int i = 1; i <= n; i++){
		cin >> v[i];
		mangin[i] = v[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> w[i];
	}
	for(int i = 1; i <= n - 1; i++){
		for(int j = i + 1; j <= n; j++){
			if(double(v[i]/w[i]) < double(v[j]/w[j])){
				swap(v[i], v[j]);
				swap(w[i], w[j]);
			}
		}
	}
	ktao();
	res = 0;
	V = 0;
	Try(1);
	cout << res << endl;
	set<int> se;
	for(int i = 1; i <= n; i++){
		if(kq[i]) se.insert(v[i]);
	}
	for(int i = 1; i <= n; i++){
		if(se.find(mangin[i]) != se.end()){
			cout << 1 << " ";
		}
		else cout << 0 << " ";
	}
	cout << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

//4 10
//6 5 3 7
//5 4 6 5
	

	
