#include<bits/stdc++.h>
 
using namespace std;

long long meger(long long a[], long long l, long long m, long long r){
	long long res = 0;
	int n1 = m - l + 1;
	int n2 = r - (m + 1) + 1;
	long long a1[n1], a2[n2];
	// chia doi mang;
	for(int i = 0; i < n1; i++){
		a1[i] = a[l + i];
	}
	for(int j = 0; j < n2; j++){
		a2[j] = a[j + m + 1];
	}
	// sap xep lai;
	int i = 0, j = 0, k = l;
	while(i < n1 && j < n2){
		if(a1[i] <= a2[j]){
			a[k++] = a1[i++];
		}
		else{
			res += n1 - i;
			a[k++] = a2[j++];
		}
	}
	while(i < n1){
		a[k++] = a1[i++];
	}
	while(j < n2){
		a[k++] = a2[j++];
	}
	return res;
}

long long megersort(long long a[], long long l, long long r){
	long long res = 0;
	if(l < r){
		long long m = (l + r)/2;
		res += megersort(a, l, m);
		res += megersort(a, m + 1, r);
		res += meger(a, l, m, r);
	}
	return res;
}

void TC(){
	long long n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << megersort(a, 0, n - 1) << endl;
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
	



