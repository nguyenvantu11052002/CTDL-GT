#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, p = 0;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	vector<string> v;
	for(int i = 0; i < n; i++){
		string s = "Buoc " + to_string(p) + ": ";
		for(int i = 0; i <= p && p < n; i++){
			int index = i;
			int value = a[i];
		   	while(index > 0 && a[index - 1] > value){
		    	a[index] = a[index - 1];
		    	index--;
	     	}
			a[index] = value;	
	    }
	    for(int i = 0; i <= p; i++){
	    	s += to_string(a[i]) + " ";
		}
		p++;
		v.push_back(s);
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << endl;
	}
	return 0;
}

