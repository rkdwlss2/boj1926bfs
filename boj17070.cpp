/*#include <iostream>
#include <cstring>
using namespace std;
int n;
int board[17][17];
int cache[17][17][3];

int go(int x, int y, int mod) {
	if (x >= n || y >= n)return 0;
	if (x == n - 1 && y == n - 1)return 1;
	int& ret = cache[x][y][mod];
	if (ret != -1)return ret;
	ret = 0;
	if (mod == 0) {
		if (board[x][y + 1] != 1) {
			ret += go(x, y + 1, 0);
		}
		if (board[x][y + 1] != 1 && board[x + 1][y] != 1 && board[x + 1][y + 1] != 1) {
			ret += go(x + 1, y + 1, 2);
		}
	}
	else if (mod == 1) {
		if (board[x + 1][y] != 1) {
			ret += go(x + 1, y, 1);
		}
		if (board[x][y + 1] != 1 && board[x + 1][y] != 1 && board[x + 1][y + 1] != 1) {
			ret += go(x + 1, y + 1, 2);
		}
	}
	else {
		if(board[x][y + 1] != 1) {
			ret += go(x, y + 1, 0);
		}
		if (board[x + 1][y] != 1) {
			ret += go(x + 1, y, 1);
		}
		if (board[x][y + 1] != 1 && board[x + 1][y] != 1 && board[x + 1][y + 1] != 1) {
			ret += go(x + 1, y + 1, 2);
		}
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	memset(cache, -1, sizeof(cache));
	cout << go(0, 1, 0) << '\n';
}*/