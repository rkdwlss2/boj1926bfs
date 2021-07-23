/*#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[2001];
int d[2001];
bool check[2001];

void dijstra(int start) {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0,start });
	d[start] = 0;
	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		if (d[now] < dist)continue;
		for (int i = 0; i < graph[now].size(); i++) {
			int cost = dist + graph[now][i].second;
			int next = graph[now][i].first;
			if (d[next] > cost) {	
				d[next] = cost;
				pq.push({ -cost,next });
			}
		}    
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

}*/