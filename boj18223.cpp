//#include <iostream>
//#include <vector>
//#include <queue>
//#define INF 1e9
//using namespace std;
//int n, m, p;
//
//vector<pair<int, int>> graph[5001];
//int d[5001];
//
//void dijstra(int start) {
//	priority_queue<pair<int, int>> pq;
//	d[start] = 0;
//	pq.push({ 0,start });
//	while (!pq.empty()) {
//		int dist = -pq.top().first;
//		int now = pq.top().second;
//		pq.pop();
//		if (dist > d[now])continue;
//		for (int i = 0; i < graph[now].size(); i++) {
//			int cost = dist + graph[now][i].second;
//			int next = graph[now][i].first;
//			if (cost < d[next]) {
//				d[next] = cost;
//				pq.push({ -cost,next });
//			}
//		}
//	}ss
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m >> p;
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		graph[a].push_back({ b,c });
//		graph[b].push_back({ a,c });
//	}
//	fill(d, d + 5001, INF);
//	dijstra(1);
//	int oneToV = d[n];
//	int oneToP = d[p];
//	fill(d, d + 5001, INF);
//	dijstra(p);
//	int PToV = d[n];
//
//	if (oneToV < oneToP + PToV) {
//		cout << "GOOD BYE" << '\n';
//	}
//	else {
//		cout << "SAVE HIM" << '\n';
//	}
//
//}