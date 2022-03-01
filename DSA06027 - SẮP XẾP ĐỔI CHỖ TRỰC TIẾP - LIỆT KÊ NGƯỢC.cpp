#include<bits/stdc++.h>

using namespace std;

void doicho(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int t;
	cin >> t;
	while(t--){
	int n, m = 1;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	vector<string> v;
	for(int i = 0; i < n - 1; i++){ // 4 phantu thi can 4-1 buoc
	    string s = "Buoc " + to_string(m) + ": ";
		//printf("Buoc %d: ", m);
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]) doicho(&a[i], &a[j]);
		}
		for(int i = 0; i < n; i++){
			s += to_string(a[i]) + " ";
		}
		v.push_back(s);
		m++;
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << endl;
	}
}
	return 0;
}

