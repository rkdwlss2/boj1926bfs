/*#include <iostream>
using namespace std;

int board[501][501];

int te[8][3][2] = {
	{{1,0},{1,0},{1,1}},
	{{1,1},{1,0},{1,0}},
	{{0,1},{0,1},{1,1}},
	{{1,1},{0,1},{0,1}},
	{{1,0},{1,1},{1,0}},
	{{0,1},{1,1},{0,1}},
	{{0,1},{1,1},{1,0}},
	{{1,0},{1,1},{0,1}}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	int sum = -1;
	for (int k = 0; k < 8; k++) {
		for (int i = 0; i < n - 3 + 1; i++) {
			for (int j = 0; j < m - 2 + 1; j++) {
				int tmpSum = 0;
				for (int a = 0; a < 3; a++) {
					for (int b = 0; b < 2; b++) {
						tmpSum += te[k][a][b] * board[i+a][j+b];
					}
				}
				if (tmpSum > sum)sum = tmpSum;
			}
		}
	}

	for (int k = 0; k < 8; k++) {
		for (int i = 0; i < n - 2 + 1; i++) {
			for (int j = 0; j < m - 3 + 1; j++) {
				int tmpSum = 0;
				for (int a = 0; a < 2; a++) {
					for (int b = 0; b < 3; b++) {
						tmpSum += te[k][3-b-1][a] * board[i+a][j+b];
					}
				}
				if (tmpSum > sum)sum = tmpSum;
			}
		}
	}

	for (int i = 0; i < n - 4 + 1; i++) {
		for (int j = 0; j < m; j++) {
			int tmpSum = 0;
			for (int a = 0; a < 4; a++) {
				tmpSum += board[i + a][j];
			}
			if (tmpSum > sum)sum = tmpSum;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m-4+1; j++) {
			int tmpSum = 0;
			for (int a = 0; a < 4; a++) {
				tmpSum += board[i][j+a];
			}
			if (tmpSum > sum)sum = tmpSum;
		}
	}
	for (int i = 0; i < n-2+1; i++) {
		for (int j = 0; j < m - 2 + 1; j++) {
			int tmpSum = 0;
			for (int a = 0; a < 2; a++) {
				for (int b = 0; b < 2; b++) {
					tmpSum += board[i + a][j + b];
				}
			}
			if (tmpSum > sum)sum = tmpSum;
		}
	}
	cout << sum << '\n';
}*/