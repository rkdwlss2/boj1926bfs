/*#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;
int n, last;
vector<pair<int, int>> graph[10001];
int d[10001];
int road[10001];

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
			int cost = dist + graph[now][i].second;
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
	cin >> n >> last;
	road[0]++;
	road[last]++;
	for (int i = 0; i < n; i++) {
		int a, b, s;
		cin >> a >> b >> s;
		graph[a].push_back({ b,s });
		road[a]++;
		road[b]++;
	}
	vector<int> tmp;
	for (int i = 0; i < 10001; i++) {
		if (road[i] > 0) {
			tmp.push_back(i);
		}
	}
	for (int i = 0; i < tmp.size()-1; i++) {
		int fir = tmp[i];
		int sec = tmp[i + 1];
		graph[fir].push_back({ sec,sec - fir });
	}
	fill(d, d + 10001, INF);
	dijstra(0);
	cout << d[last] << '\n';
}*/