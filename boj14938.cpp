/*#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;
int n, m, l;

vector<pair<int, int> > graph[100001];
// �ִ� �Ÿ� ���̺� �����
int d[100001];
int gift[101];
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
    cin >> n >> l >> m;
    for (int i = 1; i <= n; i++) {
        cin >> gift[i];
    }


    for (int i = 0; i < m; i++) {
        int a, b, s;
        cin >> a >> b >> s;
        graph[b].push_back({ a,s });
        graph[a].push_back({ b,s });
    }
    int big = -1;
    for (int i = 1; i <= n; i++) {
        fill(d, d + 100001, INF);
        dijkstra(i);
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            if (d[j] <= l)sum += gift[j];
        }
        if(big < sum)big = sum;
    }


    cout << big << '\n';
    
}*/