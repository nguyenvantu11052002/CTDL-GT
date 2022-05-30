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

int solve (node* t1, node* t2) {
	queue<node*> q1, q2;
	q1.push(t1);
	q2.push(t2);
	while (!q1.empty() || !q2.empty()) {
		node* top1 = q1.front(); q1.pop();
		node* top2 = q2.front(); q2.pop();
		if (top1->data != top2->data ) return 0;
		if (top1->l) q1.push(top1->l);
		if (top1->r) q1.push(top1->r);
		if (top2->l) q2.push(top2->l);
		if (top2->r) q2.push(top2->r);
	}
	return 1;
}

void TC(){
	int n;
	cin >> n;
	node* t1 = NULL;
	int a, b; char c;
	while (n--) {
		ok = 0;
		cin >> a >> b >> c;
		if (t1 == NULL) {
			t1 = new node(a);
			noinode(t1, b, c);
		}
		else taotree(t1, a, b, c);
	}
	int m;
	cin >> m;
	node* t2 = NULL;
	while (m--) {
		ok = 0;
		cin >> a >> b >> c;
		if (t2 == NULL) {
			t2 = new node(a);
			noinode(t2, b, c);
		}
		else taotree(t2, a, b, c);
	}
	cout << solve(t1, t2) << endl;
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
