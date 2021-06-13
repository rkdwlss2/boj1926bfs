/*#include <iostream>
#include <queue>
#include <vector>
#define INF 1e9
using namespace std;
vector<pair<int, int>> graph[300001];
int d[300001];
void dijstra(int start) {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0,start });
	d[start] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();
		if (d[now] < dist)continue;
		for (int i = 0; i < graph[now].size(); i++) {
			int cost = graph[now][i].second + dist;
			if (cost < d[graph[now][i].first]) {
				d[graph[now][i].first] = cost;
				pq.push({ -cost,graph[now][i].first });
			}
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k, x;
	cin >> n >> m >> k >> x;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back({ b,1 });
	}
	fill(d, d + 300001, INF);
	dijstra(x);
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (d[i] == k) {
			cout << i << '\n';
			count++;
		}
	}
	if (count == 0)cout << -1 << '\n';
}*/