/*#include <iostream>
using namespace std;
int n, l;
int board[101][101];
int lean[101][101];
bool row[101];
bool col[101];
bool check(int x, int y, int dir, int rc) {
	if (rc == 0) {
		if (dir == 0) {
			return y + l < n;
		}
		else if (dir == 1) {
			return y - l >= -1;
		}
	}
	else {
		if (dir == 0) {
			return x + l < n;
		}
		else if (dir == 1) {
			return x - l >= -1;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin>>board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			int first = board[i][j];
			int second = board[i][j+1];
			int between = first - second;
			int dir = 0;
			if (second > first) {
				between = second - first;
				dir = 1;
			}
			if (between > 1) {
				row[i] = true;
			}
			else if (between == 1) {
				if (dir == 0) {
					if (check(i, j+1, 0, 0) == false) {
						row[i] = true;
					}
					else {
						for (int k = 0; k < l; k++) {
							if (board[i][j + k + 1] != second)row[i] = true;
							else {
								lean[i][j + k + 1]++;
							}
						}
					}

				}
				else {
					if (check(i, j, 1, 0) == false) {
						row[i] = true;
					}
					else {
						for (int k = 0; k < l; k++) {
							if (board[i][j - k] != first)row[i] = true;
							else {
								lean[i][j - k]++;
							}
						}
					}
				}
			}

			
		}
	}



}*/