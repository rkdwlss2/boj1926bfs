/*#include <iostream>
#include <vector>
using namespace std;
int n, m;
int board[21][21];
bool alpha[26];
bool visited[21][21];
int dx[4] = { 0,0,1,-1 };
int dy[4] = {1,-1,0,0 };

int go(int x, int y) {

	int ret = 0;
	int now = board[x][y];
	for (int dir = 0; dir < 4; dir++) {
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		int next = board[nx][ny];
		if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
		if (visited[nx][ny] == true||alpha[next]==true )continue;
		visited[nx][ny] = true;
		alpha[next]=true;
		ret=max(ret,go(nx, ny)+1);
		visited[nx][ny] = false;
		alpha[next]=false;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char tmp;
			cin >> tmp;
			board[i][j] = tmp - 'A';
		}
	}
	visited[0][0] = true;
	alpha[board[0][0]] = true;
	
	cout << go(0, 0)+1 << '\n';
}*/