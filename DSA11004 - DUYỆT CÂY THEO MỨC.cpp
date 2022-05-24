#include<bits/stdc++.h>

using namespace std;

int ok;
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

void noinode (node* &t, int b, char c) {
	if (c == 'L') t->l = new node(b);
	else t->r = new node(b);
}

void taotree (node* t, int a, int b, char c) {
	if (ok == 1 || t == NULL) return;
	if (t->data == a) {
		ok = 1;
		noinode(t, b, c);
	}
	else {
		taotree(t->l, a, b, c);
		taotree(t->r, a, b, c);
	}
}

void bfs (node* t) {
	queue<node*> q;
	q.push(t);
	while (!q.empty()) {
		node* v = q.front();
		q.pop();
		res.push_back(v->data);
		if (v->l != NULL) q.push(v->l);
		if (v->r != NULL) q.push(v->r);
	}
}

void TC () {
	res.clear();
	int n;
	cin >> n;
	node* t = NULL;
	// tao cay;
	while (n--) {
		ok = 0;
		int a, b;
		char c;
		cin >> a >> b >> c;
		if (t == NULL) {
			t = new node(a);
			noinode(t, b, c);
		}
		else {
			taotree(t, a, b, c);
		}
	}
	// level order;
	bfs(t);
	for (auto x : res) {
		cout << x << " ";
	}
	cout << endl;
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
