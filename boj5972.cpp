/*#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;
int n, m;
vector<pair<int, int>> graph[50001];
int d[50001];

void dijstra(int start) {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0,start });
	d[start] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();
		for (int i = 0; i < graph[now].size(); i++) {
			int cost = dist + graph[now][i].second;
			int next = graph[now][i].first;
			if (cost < d[next]) {
				d[next] = cost;
				pq.push({ -cost,next });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b,c });
		graph[b].push_back({ a,c });
	}
	fill(d, d + 50001, INF);
	dijstra(1);
	cout << d[n] << '\n';
}*/