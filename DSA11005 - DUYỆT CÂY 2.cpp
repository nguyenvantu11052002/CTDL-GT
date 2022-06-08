#include<bits/stdc++.h>
 
using namespace std;

struct node{
	int data, st, ed;
	node* l;
	node* r;
	node (int x) {
		data = x;
		l = NULL;
		r = NULL;
	}
};

int search (int in[], node* t) {
	for (int i = t->st; i <= t->ed; i++) {
		if (in[i] == t->data ) return i;
	}
	return -1;
}

void insert (node* &t, int val, int c) {
	if (c == 0) {
		t->l = new node(val);
	}
	else {
		t->r = new node(val);
	}
}

void post (node* &t, int lv[], int in[], int n) {
	queue<node*> q;
	t = new node(lv[0]);
	t->st = 0;
	t->ed = n - 1;
	q.push(t);
	int id = 0;
	while (!q.empty()) {
		node* top = q.front();
		q.pop();
		int x = search(in, top);
		if (x > top-> st) {
			id++;
			insert(top, lv[id], 0);
			top->l->st = top->st;
			top->l->ed = x - 1;
			q.push(top->l);
		}
		if (x < top-> ed) {
			id++;
			insert(top, lv[id], 1);
			top->r->st = x + 1;
			top->r->ed = top->ed;
			q.push(top->r);
		}
	}
}

void LRN (node* t) {
	if (t == NULL) return;
	LRN (t->l );
	LRN (t-> r);
	cout << t->data << " ";
}

void TC () {
	int n; 
	cin >> n;
	int in[n], lv[n];
	for (int i = 0; i < n; i++) {
		cin >> in[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> lv[i];
	}
	node* t = NULL;
	post(t, lv, in, n);
	LRN(t);
	cout << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
