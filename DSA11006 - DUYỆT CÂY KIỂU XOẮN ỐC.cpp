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

void solve (node* t) {
	stack<node*> st1, st2;
	st1.push(t);
	while (!st1.empty() || !st2.empty()) {
		while (!st1.empty()) {
			node* temp = st1.top();
			st1.pop();
			cout << temp->data << " ";
			if (temp->r) st2.push(temp->r);
			if (temp->l) st2.push(temp->l);
		}
		while (!st2.empty()) {
			node* tem = st2.top();
			st2.pop();
			cout << tem->data << " ";
			if (tem->l) st1.push(tem->l);
			if (tem->r) st1.push(tem->r);
		}
	}
}

void TC(){
	int n;
	cin >> n;
	node* t = NULL;
	int a, b; char c;
	while (n--) {
		ok = 0;
		cin >> a >> b >> c;
		if (t == NULL) {
			t = new node(a);
			noinode(t, b, c);
		}
		else taotree(t, a, b, c);
	}
	solve (t);
	cout << endl;
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
