#include<bits/stdc++.h>

using namespace std;

vector<int> res;

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
	if (t->l != NULL || t->r != NULL) res.push_back(t->data);
	LNR(t -> r);
}

void TC () {
	res.clear();
	int n, x;
	cin >> n;
	node *t = NULL;
	while (n--) {
		cin >> x;
		themnode(t, x); // tao cay nhi phan tim kiem;
	}
	LNR(t);
	cout << res.size() << endl;
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
