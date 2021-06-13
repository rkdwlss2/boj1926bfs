/*#include <iostream>
using namespace std;
int n, m;
int board[501][501];

int cache[501][501];

bool check(int x, int y) {
	return x >= 0 && y >= 0 && x < n&& y < m;
}

int go(int x, int y) {
	if (check(x, y) == false)return 0;
	if (x == 0 && y == 0)return 1;
	int& ret = cache[x][y];
	if (ret != -1)return ret;
	ret = 0;
	for (int i = -1; i < 2; i+=2) {
		int nx = x + i, ny = y;
		if (board[nx][ny] > board[x][y]) {
			ret += go(x + i, y);
		}
	}
	for (int i = -1; i < 2; i += 2) {
		int nx = x , ny = y+i;
		if (board[nx][ny] > board[x][y]) {
			ret += go(x, y+i);
		}
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin>>board[i][j];
		}
	}
	for (int i = 0; i < 501; i++) {
		fill(cache[i], cache[i] + 501, -1);
	}
	cout<<go(n - 1, m - 1)<<'\n';


}*/