/*#include <iostream>
#include <cstring>
using namespace std;
int n, k, m;
int board[31][11][2];
bool visited[31][11];

int ans = 987654321;

int down(int x, int y) {
	int left = board[x][y][0];
	int right = board[x][y][1];
	if (left == 1 && !visited[x][y - 1]) {
		visited[x][y - 1] = true;
		return down(x, y - 1);
	}
	else if (right == 1 && !visited[x][y + 1]) {
		visited[x][y + 1] = true;
		return down(x, y + 1);
	}
	else if (x < (m - 1)) {
		visited[x + 1][y] = true;
		return down(x + 1, y);
	}
	return y;
}

void go(int x,int y,int index,int end) {
	if (index == end) {
		bool check = true;
		for (int i = 0; i < n; i++) {
			memset(visited, false, sizeof(visited));
			visited[0][i] = true;
			if (down(0, i) != i) {
				check = false;
				return;
			}
		}
		if (check == true && ans > index)ans = index;
		return;
	}
	if (x == m - 1 && y == n-1)return;
	if (y == n-1) {
		go(x + 1, 0, index, end);
		return;
	}
	int& left = board[x][y][1];
	int& right = board[x][y + 1][0];
	if (left == 0) {
		left = 1;
		right = 1;
		go(x, y + 1, index + 1, end);
		left = 0;
		right = 0;
	}
	go(x, y + 1, index, end);
}



int main() {
	cin >> n >> k >> m;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		board[a - 1][b - 1][1]=1;
		board[a - 1][b][0] = 1;
	}
	visited[0][0] = true;
	go(0, 0, 0, 0);
	go(0, 0, 0, 1);
	go(0, 0, 0, 2);
	go(0, 0, 0, 3);
	if (ans != 987654321)cout << ans << '\n';
	else cout << -1 << '\n';
	
}*/