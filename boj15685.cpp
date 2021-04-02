/*#include <iostream>

using namespace std;

int dx[4] = { 0,-1,0,1 };
int dy[4] = { 1,0,-1,0 };
int board[101][101];
int n;
void go(int x,int y, int delx,int dely,int direction,int gen) {
	if (gen == 0) {
		int nx = x + dx[direction];
		int ny = y + dy[direction];
		board[nx][ny] = 1;
		board[x][y] = 1;
		return;
	}
	go(x, y, delx, dely, (4+direction-1)%4, gen - 1);
	go(x, y, delx, dely, direction, gen - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

}*/