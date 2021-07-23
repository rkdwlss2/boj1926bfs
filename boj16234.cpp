/*#include <iostream>
#include <queue>
using namespace std;
int n,a, b;
int board[51][51];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int visited[51][51];
bool bfs(int sx,int sy) {
	queue<pair<int, int>> q;
	q.push({ sx,sy });
	visited[sx][sy] = true;
	int sum = board[sx][sy];
	int count = 1;
	while (!q.empty()) {
		auto now = q.front(); q.pop();
		int x = now.first;
		int y = now.second;
		int v = board[x][y];
		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			int nv = board[nx][ny];
			int be = v - nv;
			if (nv > v)be = nv - v;
			if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
			if (visited[nx][ny] == true)continue;
			if (nv<a || nv>b)continue;
			visited[nx][ny] = true;
			count++;
			sum += nv;
			q.push({ nx,ny });
		}
	}
	if (count == 1)return true;
	else return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	int answer = 0;
	while (true) {
		bool check = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				bool tmp = bfs(i, j);
				if (tmp == false)check = true;
			}
		}
		if (check == false)break;
		else {
			answer++;
		}
	}
	cout << answer << '\n';
}*/