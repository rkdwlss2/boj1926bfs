/*#include <iostream>
#include <queue>
using namespace std;
int n, m;
int board[1001][1001];
int visited[1001][1001];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int bfs(int sx,int sy) {
	queue<pair<int,pair<int, int>>> q;
	q.push({ 0,{sx,sy} });
	visited[sx][sy] = 1;
	while (!q.empty()) {
		auto now = q.front();
		q.pop();
		int state = now.first;
		int x = now.second.first;
		int y = now.second.second;
		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
			if (visited[nx][ny] > 0 || (state==1&&board[nx][ny] == 1))continue;
			if (state == 0 && board[nx][ny] == 1) {
				visited[nx][ny] = visited[x][y] + 1;
				q.push({ 1,{ nx,ny } });
			}
			else {
				visited[nx][ny] = visited[x][y] + 1;
				q.push({ state,{ nx,ny } });
			}
		}
	}
	return visited[n - 1][m - 1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char tmp;
			cin >> tmp;
			board[i][j] = tmp - '0';
		}
	}
	int tmp = bfs(0, 0);
	if (tmp == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << tmp << '\n';
	}

}*/