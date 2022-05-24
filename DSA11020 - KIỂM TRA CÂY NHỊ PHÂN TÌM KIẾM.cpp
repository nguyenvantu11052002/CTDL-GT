#include<bits/stdc++.h>

using namespace std;
int a[1001];
vector<int> b(1001);

struct node{
	int data;
	node *l;
	node *r;
	node (int x) {
		data = x;
		l = NULL;
		r = NULL;
	}
};

void themnode (node* &t, int x) {
	if (t == NULL) t = new node(x);
	else if (x < t->data ) {
		themnode(t -> l, x);
	}
	else themnode(t -> r, x);
}

void LNR (node* t) {
	if (t == NULL) return;
	LNR(t -> l);
	b.push_back(t->data);
	LNR(t->r);
}

void TC () {
	b.clear();
	int n, x;
	cin >> n;
	node *t = NULL;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		themnode(t, a[i]);
	}
	LNR(t);
	int ok = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			ok = 0;
			break;
		}
	}
	cout << ok << endl;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	
	int T = 1;
	cin >> T;
	while (T--) {
		TC();
	}
	return 0;
}
