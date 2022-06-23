#include<bits/stdc++.h>

using namespace std;

bool vs[10][10];

struct data{
	int x, y, cnt;
};

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

void solve(int a, int b, int c, int d) {
	data u;
	u.x = a; u.y = b; u.cnt = 0;
	queue<data> q;
	q.push(u);
	vs[a][b] = true;
	while(!q.empty()) {
		data v = q.front();
		q.pop();
		if (v.x == c && v.y == d) {
			cout << v.cnt << endl;
			return;
		}
		for (int i = 0; i < 8; i++) {
			int x1 = v.x + dx[i];
			int y1 = v.y + dy[i];
			int z1 = v.cnt + 1;
			data them = {x1, y1, z1};
			if (x1 >= 1 && x1 <= 8 && y1 >= 1 && y1 <= 8 && vs[x1][y1] == false) {
				vs[x1][y1] = true;
				q.push(them);
			}
		}
	}
}

void TC () {
	memset(vs, false, sizeof(vs));
	char x, y;
	int b, d;
	cin >> x >> b >> y >> d;
	int a = (int) (x - 97 + 1);
	int c = (int) (y - 97 + 1);
	if (a == c && b == d) {
		cout << 0 << endl;
		return;
	}
	solve(a, b, c, d);
}

int main () {
	int t = 1;
	cin >> t;
	while (t--) {
		TC();
	}
	return 0;
}
