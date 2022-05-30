#include<bits/stdc++.h>
 
using namespace std;

int ok;
vector<int> pre;

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

void themnode (node* &t, int x) {
	if (t == NULL) t = new node(x);
	else {
		if (x < t->data ) themnode(t->l, x);
		else themnode(t->r, x);
	}
}

void LRN (node* t) {
	if (t == NULL) return;
	LRN (t->l);
	LRN (t-> r);
	cout << t->data << " ";
}

void TC(){
	int n;
	cin >> n;
	node* t = NULL;
	int x;
	while (n--) {
		cin >> x;
		themnode(t, x);
	}
	LRN(t);
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
