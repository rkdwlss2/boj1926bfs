/*#include <iostream>
#include <queue>
#include <vector>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[101];
int d[101][101];

void dijstra(int start) {
	priority_queue<pair<int, int>> pq;
	pq.push({0,start});
	d[start][start] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();
		if (d[start][now] < dist)continue;
		for (int i = 0; i < graph[now].size(); i++) {
			int cost = dist + graph[now][i].second;
			if (cost < d[start][graph[now][i].first]) {
				d[start][graph[now][i].first] = cost;
				pq.push({ -cost,graph[now][i].first });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < 101; i++) {
			graph[i].clear();
		}
		for (int i = 0; i < m; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			graph[a].push_back({ b,c });
			graph[b].push_back({ a,c });
		}
		int k;
		cin >> k;
		int arr[101];
		for (int i = 0; i < 101; i++) {
			for (int j = 0; j < 101; j++) {
				d[i][j] = INF;
			}
		}
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
			dijstra(arr[i]);
		}
		int sum = 987654321;
		int index = -1;
		for (int i = 1; i <= n; i++) {
			int tSum = 0;
			for (int j = 0; j < k; j++) {
				tSum += d[arr[j]][i];
			}
			if (sum > tSum) {
				sum = tSum;
				index = i;
			}
		}
		for (int i = 1; i <= n; i++) {
			int tSum = 0;
			for (int j = 0; j < k; j++) {
				tSum += d[arr[j]][i];
			}
			if (sum == tSum) {
				cout << i << '\n';
				break;
			}
		}
	}
}*/