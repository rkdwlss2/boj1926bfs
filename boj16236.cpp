//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int X, Y;
//int n;
//int board[21][21];
//int visited[21][21];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//int Size = 2;
//int eaten = 0;
//priority_queue<pair<int,pair<int, int>>> pq;
//bool bfs(int sx,int sy) {
//	queue<pair<int, int>> q;
//	q.push({ sx,sy });
//	visited[sx][sy] = 1;
//	bool check = false;
//	while (!q.empty()) {
//		auto now = q.front(); q.pop();
//		int x = now.first;
//		int y = now.second;
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
//			if (visited[nx][ny] > 0 || board[nx][ny] > Size)continue;
//			visited[nx][ny] = visited[x][y] + 1;
//			q.push({ nx,ny });
//			if (board[nx][ny] > 0&&board[nx][ny]!=Size) {
//				pq.push({ -visited[nx][ny],{-nx,-ny} });
//				check = true;
//			}
//		}
//	}
//	if (check)return true;
//	else return false;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin>>board[i][j];
//			if (board[i][j] == 9) {
//				X = i;
//				Y = j;
//				board[i][j] = 0;
//			}
//		}
//	}
//	int clk=0;
//	while (true) {
//		for (int i = 0; i < 21; i++) {
//			for (int j = 0; j < 21; j++) {
//				visited[i][j] = false;
//			}
//		}
//		bool check = bfs(X, Y);
//		if (check == false)break;
//		
//		pair<int, pair<int, int>> tmp = pq.top();
//		X = -tmp.second.first;
//		Y = -tmp.second.second;
//		clk += (visited[X][Y]-1);
//		board[X][Y] = 0;
//		eaten++;
//		if (eaten == Size) {
//			Size++;
//			eaten = 0;
//		}
//		while (!pq.empty()) {
//			pq.pop();
//		}
//
//	}
//	cout << clk << '\n';
//
//}
