/*#include <iostream>
using namespace std;
int n, l;

int board[101][101];
int cBoard[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void clean(int x, int y, int dir) {
	if (dx[dir] == 0) {
		for (int i = 0; i < n; i++) {
			cBoard[x][i] = 0;
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			cBoard[i][y] = 0;
		}
	}
}
bool fBoard(int sx, int sy, int dir) {
	int x = sx;
	int y = sy;
	int nx, ny;
	int pre = board[x + dx[dir]][y + dy[dir]];
	for (int k = 1; k <=l; k++) {
		nx = x + (k*dx[dir]);
		ny = y + (k * dy[dir]);
		
		if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
			clean(sx, sy, dir);
			return false;
		}
		int now = board[nx][ny];
		if (now != pre) {
			clean(sx, sy, dir);
			return false;
		}
		cBoard[nx][ny] += 1;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	int count =0;
	for (int i = 0; i < n; i++) {
		bool ch2 = false;
		for (int j = 0; j < n-1; j++) {
			int now = board[i][j];
			int next = board[i][j + 1];
			if (now == next + 1) {
				bool ch = fBoard(i, j, 0);
				if (!ch) {
					count++;
					ch2 = true;
					break;
				}
			}
			else if (now + 1 == next) {
				bool ch = fBoard(i, j+1, 1);
				if (!ch) {
					count++;
					ch2 = true;
					break;
				}
			}
			else if (now >= next + 2) {
				count++;
				ch2 = true;
				break;
			}
			else if (next >= now + 2) {
				count++;
				ch2 = true;
				break;
			}
		}
		if (ch2 == false) {
			for (int j = 0; j < n; j++) {
				if (cBoard[i][j] >= 2) {
					count++;
					break;
				}
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			cBoard[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		bool ch2 = false;
		for (int j = 0; j < n - 1; j++) {
			int now = board[j][i];
			int next = board[j+1][i];
			if (now == next + 1) {
				bool ch = fBoard(j, i, 2);
				if (!ch) {
					count++;
					ch2 = true;
					break;
				}
			}
			else if (now + 1 == next) {
				bool ch = fBoard(j+1, i, 3);
				if (!ch) {
					count++;
					ch2 = true;
					break;
				}
			}
			else if (now >= next + 2) {
				count++;
				ch2 = true;
				break;
			}
			else if (next >= now + 2) {
				count++;
				ch2 = true;
				break;
			}
		}
		if (ch2 == false) {
			for (int j = 0; j < n; j++) {
				if (cBoard[j][i] >= 2) {
					count++;
					break;
				}
			}
		}
	}

	cout <<2*n- count << '\n';
}*/