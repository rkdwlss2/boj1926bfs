/*#include <iostream>
#include <vector>
#include <queue>
#define INF -1
using namespace std;
int n;
vector<pair<int, int>> graph[10001];
int d[10001];
int ans = -1;
void dijstra(int start) {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0,start });
	d[start] = 987654321;
	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();
		if (dist < d[start])continue;
		for (int i = 0; i < graph[now].size(); i++) {
			int cost = dist + graph[now][i].second;
			int next = graph[now][i].first;
			if (cost > d[next]) {
				d[next] = cost;
				pq.push({ -cost,next });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b,c });
		graph[b].push_back({ a,c });
	}
	for (int i = 1; i <= n;i++) {
		fill(d, d + 10001, INF);
		dijstra(i);

		for (int j = 1; j <= n; j++) {
			if (d[j] == 987654321)continue;
			if (d[j] > ans)ans = d[j];
		}
	}
	cout << ans << '\n';
}*/