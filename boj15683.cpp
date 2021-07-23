/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, ans;
int pos[5][2];
int map[9][9];
priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq2;

void check(int n, int m) {
	if (pos[1][1] == 1 && pos[1][1] > 0) {
		for (int i = m + 1; i < M; i++) {
			if (map[n][i] == 6) {
				break;
			}
			else if (map[n][i] == 0) {
				map[n][i] = 7;
			}
		}
	}
	if (pos[3][1] == 1 && pos[3][0] > 0) {
		for (int i = m - 1; i >= 0; i--) {
			if (map[n][i] == 6) {
				break;
			}
			else if (map[n][i] == 0) {
				map[n][i] = 7;
			}
		}
	}
	if (pos[2][1] == 1 && pos[2][0] > 0) {
		for (int i = n + 1; i <= N; i++) {
			if (map[i][m] == 6) {
				break;
			}
			else if (map[i][m] == 0) {
				map[i][m] = 7;
			}
		}
	}
	if (pos[4][1] == 1 && pos[4][0] > 0) {
		for (int i = n - 1; i >= 0; i--) {
			if (map[i][m] == 6) {
				break;
			}
			else if (map[i][m] == 0) {
				map[i][m] = 7;
			}
		}
	}
	return;
}

void cctv(int x, int y, int z) {
	for (int i = y + 1; i < M; i++) {
		if (map[x][i] == 0) {
			pos[1][0]++;
		}
		else if (map[x][i] == 6) {
			break;
		}
	}
	for (int i = x + 1; i < N; i++) {
		if (map[i][y] == 0) {
			pos[2][0]++;
		}
		else if (map[i][y] == 6) {
			break;
		}
	}
	for (int i = y - 1; i >= 0; i--) {
		if (map[x][i] == 0) {
			pos[3][0]++;
		}
		else if (map[x][i] == 6) {
			break;
		}
	}
	for (int i = x - 1; i >= 0; i--) {
		if (map[i][y] == 0) {
			pos[4][0]++;
		}
		else if (map[i][y] == 6) {
			break;
		}
	}

	for (int i = 1; i <= 4; i++) {
		pq.push({ pos[i][0], i });
	}

	if (z == 1) {
		pos[pq.top().second][1] = 1;
	}
	else if (z == 2) {
		if (pos[1][0] + pos[3][0] > pos[2][0] + pos[4][0]) {
			pos[1][1] = 1;
			pos[3][1] = 1;
		}
		else {
			pos[2][1] = 1;
			pos[4][1] = 1;
		}
	}
	else if (z == 3) {
		int k = pq.top().second;
		pos[k][1] = 1;
		pq.pop();
		if (abs(k - pq.top().second) == 2) {
			pq.pop();
		}
		pos[pq.top().second][1] = 1;
	}
	else if (z == 4) {
		for (int i = 0; i < 3; i++) {
			pos[pq.top().second][1] = 1;
			pq.pop();
		}
	}
	else {
		for (int i = 1; i <= 4; i++) {
			pos[i][1] = 1;
		}
	}
	while (!pq.empty()) {
		pq.pop();
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] > 0 && map[i][j] < 6) {
				pq2.push({ map[i][j], { i, j } });
			}
		}
	}
	while (!pq2.empty()) {
		cctv(pq2.top().second.first, pq2.top().second.second, pq2.top().first);
		check(pq2.top().second.first, pq2.top().second.second);
		for (int k = 0; k < 5; k++) {
			memset(pos[k], 0, 2 * sizeof(int));
		}
		pq2.pop();
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0) {
				ans++;
			}
		}
	}

	cout << ans;
	return 0;
}*/