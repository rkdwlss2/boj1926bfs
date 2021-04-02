/*#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;
int n, small, big;

int board[51][51];
bool visited[51][51];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int bfs(int sx, int sy) {
	queue<pair<int, int>> q;
	visited[sx][sy] = true;
	q.push({ sx,sy });
	int sum = board[sx][sy];
	int count = 1;
	vector<pair<int, int>> vis;
	vis.push_back({ sx,sy });
	while (!q.empty()) {
		auto now = q.front(); q.pop();
		int x = now.first;
		int y = now.second;
		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
			if (visited[nx][ny] == true)continue;
			if (fabs(board[nx][ny] - board[x][y]) < small || fabs(board[nx][ny] - board[x][y]) > big)continue;
			visited[nx][ny] = true;
			sum += board[nx][ny];
			q.push({ nx,ny });
			count++;
			vis.push_back({ nx,ny });
		}
	}
	sum = sum / count;
	for (auto i : vis) {
		int tx = i.first;
		int ty = i.second;
		board[tx][ty] = sum;
	}
	if (count == 1)return 0;
	else {
		return 1;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >>n>> small >> big;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin>>board[i][j];
		}
	}
	int tans = 0;
	while (true) {
		int ans = 0;
		for (int i = 0; i < 51; i++) {
			fill(visited[i], visited[i] + 51, false);
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (visited[i][j] == true)continue;
				ans += bfs(i, j);
			}
		}
		if (ans == 0)break;
		else {
			tans++;
		}
	}
	cout << tans << '\n';
}*/