#include<bits/stdc++.h>
 
using namespace std;

struct node{
	int data, h;
	node* l;
	node* r;
	node (int x, int cao) {
		h = cao;
		data = x;
		l = NULL;
		r = NULL;
	}
};

void themnode (node* &t, int x) {
	if (t == NULL) t = new node(x, 0);
	else {
		if (x < t->data ) {
			themnode (t->l, x);
			t->h = max(t->h, t->l->h + 1); 
		}
		else {
			themnode (t->r, x);
			t->h = max(t->h, t->r->h + 1);
		}
	}
}



void TC () {
	int n, x;
	cin >> n;
	node* t = NULL;
	
	while (n--) {
		cin >> x;
		themnode(t, x);
	}
	cout << t->h << endl;
}
 
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}
