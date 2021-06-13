/*#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#define INF 1e9
using namespace std;
int n, m, k;
vector<pair<int, pair<int, int>>> graph[101];
int d[101][10001];

int dijstra(int start) {
	priority_queue<pair<int, pair<int, int>>> pq;
	pq.push({ 0,{0,start} });
	d[start][0] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first;
		int cost = -pq.top().second.first;
		int now = pq.top().second.second;
		pq.pop();
		if (dist > d[now][cost])continue;
		for (int i = 0; i < graph[now].size(); i++) {
			int nDist = dist + graph[now][i].second.second;
			int nCost = cost + graph[now][i].second.first;
			if (nCost > m)continue;
			if (nDist < d[graph[now][i].first][nCost]) {
				d[graph[now][i].first][nCost] = nDist;
				pq.push({ -nDist,{-nCost,graph[now][i].first } });
			}
		}
	}
	int ans = INF;


	for (int i = 1; i <= m; i++) {
		ans = min(ans, d[n][i]);
	}
	return ans;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		cin >> n >> m >> k;
		int start = 1;
		for (int i = 0; i < 101; i++) {
			graph[i].clear();
		}
		for (int i = 0; i < k; i++) {
			int u, v, c, d;
			cin >> u >> v >> c >> d;
			graph[u].push_back({ v,{c,d} });
		}

		for (int i = 0; i < 101; i++) {
			fill(d[i], d[i] + 10001, INF);
		}
		int ans = dijstra(1);
		if (ans == INF) {
			cout << "Poor KCM" << '\n';
		}
		else {
			cout << ans << '\n';
		}
	}
	
}*/