/*#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;
int n;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int d[51][51];
vector<pair<pair<int,int>, int>> graph[51][51];

int board[51][51];

void dijstra(int sx, int sy) {
	priority_queue<pair<int, pair<int, int>>> pq;
	pq.push({ 0,{sx,sy} });
	d[sx][sy] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first;
		pair<int, int> now = pq.top().second;
		int x = now.first;
		int y = now.second;
		pq.pop();
		if (d[x][y] < dist)continue;
		for (int i = 0; i < graph[x][y].size(); i++) {
			int cost = dist + graph[x][y][i].second;
			int nx = graph[x][y][i].first.first;
			int ny = graph[x][y][i].first.second;
			if (cost < d[nx][ny]) {
				d[nx][ny] = cost;
				pq.push({-cost,{ nx,ny } });
			}
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char tmp;
			cin >> tmp;
			int t = tmp - '0';
			board[i][j] = t;
			
		}
	}
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++) {
			d[i][j] = INF;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t=board[i][j];
			if (t == 1) {
				for (int dir = 0; dir < 4; dir++) {
					int nx = i + dx[dir];
					int ny = j + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
					if (board[nx][ny] == 0) {
						graph[i][j].push_back({ {nx,ny},1 });
					}
					else {
						graph[i][j].push_back({ {nx,ny},0 });
					}
				}
			}
			else{
				for (int dir = 0; dir < 4; dir++) {
					int nx = i + dx[dir];
					int ny = j + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
					if (board[nx][ny] == 0) {
						graph[i][j].push_back({ {nx,ny},1 });
					}
					else {
						graph[i][j].push_back({ {nx,ny},0 });
					}
				}
			}
		}
	}

	dijstra(0, 0);
	cout << d[n - 1][n - 1] << '\n';

}*/

