#include<bits/stdc++.h>

using namespace std;

int ok;

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

int check (node* t) {
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
						return 0;
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
						return 0;
					}
				}
			}
		}
	}
	return 1;
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
	cout << check(t) << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T--) {
		TC ();
	}
	return 0;
}
