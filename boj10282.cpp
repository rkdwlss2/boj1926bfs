/*#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;
int n, m, start;

vector<pair<int, int> > graph[100001];
// �ִ� �Ÿ� ���̺� �����
int d[100001];

void dijkstra(int start) {
    priority_queue<pair<int, int> > pq;
    // ���� ���� ���� ���� �ִ� ��δ� 0���� �����Ͽ�, ť�� ����
    pq.push({ 0, start });
    d[start] = 0;
    while (!pq.empty()) { // ť�� ������� �ʴٸ�
        // ���� �ִ� �Ÿ��� ª�� ��忡 ���� ���� ������
        int dist = -pq.top().first; // ���� �������� ��� 
        int now = pq.top().second; // ���� ���
        pq.pop();
        // ���� ��尡 �̹� ó���� ���� �ִ� ����� ����
        if (d[now] < dist) continue;
        // ���� ���� ����� �ٸ� ������ ������ Ȯ��
        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;
            // ���� ��带 ���ļ�, �ٸ� ���� �̵��ϴ� �Ÿ��� �� ª�� ���
            if (cost < d[graph[now][i].first]) {
                d[graph[now][i].first] = cost;
                pq.push(make_pair(-cost, graph[now][i].first));
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
		cin >> n >>m >> start;
        for (int i = 0; i < 100001; i++) {
            graph[i].clear();
        }
		for (int i = 0; i < m; i++) {
            int a, b, s;
            cin >> a >> b >> s;
            graph[b].push_back({ a,s });
		}
        fill(d, d + 100001, INF);
        dijkstra(start);
        int count = 0;
        int big = -1;
        for (int i = 1; i <=n; i++) {
            if (d[i] < INF)count++;
            if (d[i] != INF && big < d[i])big = d[i];
        }
        cout << count << ' ' << big << '\n';
	}
}*/