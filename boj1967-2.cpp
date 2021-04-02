/*#include <iostream>
#include <vector>
using namespace std;
int n;
vector<pair<int, int>> graph[10001];
bool visited[10001];
int ans[10001];
void dfs(int now,int sum,int start) {
	for (int i = 0; i < graph[now].size(); i++) {
		int next = graph[now][i].first;
		int cost = sum + graph[now][i].second;
		if (visited[next] == true)continue;
		ans[next] = cost;
		visited[next] = true;
		dfs(next, cost,start);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b,c });
		graph[b].push_back({ a,c });
	}
	int an = -1;
	for (int i = 1; i <=n; i++) {
		fill(visited, visited + 10001, false);
		visited[i] = true;
		dfs(i,0,i);
		for (int j = 1; j <= n; j++) {
			if (ans[j] > an)an = ans[j];
		}
	}
	cout << an << '\n';
}*/