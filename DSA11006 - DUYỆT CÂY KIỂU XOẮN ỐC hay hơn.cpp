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
	queue<node*> q;
	q.push(t);
	int level = 0;
	while (!q.empty()) {
		level++;
		int sizeht = q.size();
		vector<node*> a;
		while (sizeht--) {
			node* v = q.front();
			q.pop();
			a.push_back(v);
			if (v->l) q.push(v->l );
			if (v->r ) q.push(v-> r);
		}
		if (level % 2) reverse(a.begin(), a.end());
		for (auto x : a) {
			cout << x->data << " ";
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

