/*#include <iostream>
#include <cstring>
using namespace std;
int n, m;
int cache[1001][1001][1001];
int board[1001][1001];
int go(int x, int y, int size) {
	if (size == 1)return 1;
	int& ret = cache[x][y][size];
	if (ret != -1)return ret;
	if (size % 2 == 1) {
		if (go(x, y, size - 1)==0) {
			return ret =0;
		}
		else {
			int che = 1;
			for (int i = 0; i < size;i++) {
				if (!board[x + size - 1][y + i])che = 0;
				if (!board[x + i][y + size - 1])che = 0;
			}
			return ret=che;
		}
	}
	else {
		int a1 = go(x, y, size / 2);
		int a2 = go(x, y + size / 2, size / 2);
		int a3 = go(x + size / 2, y, size / 2);
		int a4 = go(x + size / 2, y + size / 2, size / 2);
		if (a1==1 && a2==1 && a3==1 && a4==1)return ret = 1;
		else {
			return ret = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	memset(cache, -1, sizeof(cache));
	int small = (n > m) ? m : n;
	for (int k = small; k >= 1; k--) {
		for (int i = 0; i < n - k; i++) {
			for (int j = 0; j < m - k; j++) {
				if (go(i, j, k) == 1) {
					cout << k * k << '\n';
					return 0;
				}
			}
		}
	}
	cout << 0 << '\n';
}*/