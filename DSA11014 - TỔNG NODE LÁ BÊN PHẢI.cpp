#include<bits/stdc++.h>
 
using namespace std;

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

map<int, node*> mp;

void noinode (node* &t, int b, char c) {
	if (c == 'L') {
		t->l = new node(b);
		mp[b] = t->l;
	}
	else {
		t->r = new node(b);
		mp[b] = t->r;
	}
}

int solve (node* t) {
	int res = 0;
	queue<node*> q;
	q.push(t);
	while (!q.empty()) {
		node* top = q.front();
		q.pop();
		if (top->l ) {
			q.push(top->l );
		}
		if (top->r ) {
			q.push(top->r );
			if (top->r->l == NULL && top->r->r == NULL) {
				res += top->r->data;
			}
		}
	}
	return res;
}

void TC(){
	int n;
	cin >> n;
	node* t = NULL;
	int a, b; char c;
	while (n--) {
		cin >> a >> b >> c;
		if (t == NULL) {
			t = new node(a);
			mp[a] = t;
			noinode(t, b, c);
		}
		else noinode(mp[a], b, c);
	}
	cout << solve(t) << endl;
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

