#include<bits/stdc++.h>
 
using namespace std;

int cnt;

struct node{
	int data;
	node* l;
	node* r;
	node (int x) {
		data = x;
		l = NULL;
		r = NULL;
	}
};

void taotree (node* &t, int a[], int l, int r) {
	if (l > r) return;
	int m = (l + r)/2;
	t = new node(a[m]);
	taotree(t->l, a, l, m - 1);
	taotree(t->r, a, m + 1, r);
}

void solve (node* t) {
	if (t == NULL) return;
	if (t->l == NULL && t->r == NULL) cnt++;
	solve(t->l);
	solve(t->r );
}

void TC () {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	node* t = NULL;
	taotree(t, a, 0, n - 1);
	cnt = 0;
	solve(t);
	cout << cnt << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
