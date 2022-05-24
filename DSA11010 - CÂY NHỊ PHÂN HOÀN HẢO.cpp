#include<bits/stdc++.h>

using namespace std;

int ok, ok1;

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

void noinode (node* &t, int b, char c) {
	if (c == 'L') t->l = new node(b);
	else t->r = new node(b);
}

void taotree (node* t, int a, int b, char c) {
	if (t == NULL || ok == 1) return;
	if (t->data == a) {
		ok = 1;
		noinode(t, b, c);
	}
	else {
		taotree(t->l, a, b, c);
		taotree(t->r, a, b, c);
	}
}

bool checknodela (node* t) {
	queue<node*> q;
	q.push(t);
	int level = 0;
	int res = INT_MAX;
	while (!q.empty()) {
		level++;
		int sizeht = q.size();
		while (sizeht--) {
			node* v = q.front();
			q.pop();
			if (v->l != NULL) {
				q.push(v->l);
				if (v->l->l == NULL && t->l->r == NULL) { // day la node la;
					if (res == INT_MAX) {
						res = level;
					}
					else if (res != level) {
						return false;
					}
				}
			}
			if (v->r != NULL) {
				q.push(v->r);
				if (v->r->l == NULL && v->r->r == NULL) { // day la node la;
					if (res == INT_MAX) {
						res = level;
					}
					else if (level != res) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

void NLR (node* t) {
	if (t == NULL || ok1 == 0) return;
	if (t->l == NULL && t->r != NULL || t->l != NULL && t->r == NULL) {
		ok1 = 0;
		return;
	}
	NLR (t->l);
	NLR (t->r);
}

void TC (){
	int n;
	cin >> n;
	node* t = NULL;
	while (n--) {
		ok = 0;
		int a, b; char c;
		cin >> a >> b >> c;
		if (t == NULL) {
			t = new node(a);
			noinode(t, b, c);
		}
		else {
			taotree(t, a, b, c);
		}
	}
	ok1 = 1;
	NLR(t);
	if (checknodela(t) && ok1 == 1) {
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T--) {
		TC ();
	}
	return 0;
}
