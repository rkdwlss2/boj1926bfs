/*#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> graph[100001];
bool visited[100001];
int mom[100001];
void dfs(int now) {
	for (int i = 0; i < graph[now].size(); i++) {
		int next = graph[now][i];
		if (visited[next] == true)continue;
		visited[next] = true;
		mom[next] = now;
		dfs(next);
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	visited[1] = true;
	dfs(1);
	for (int i = 2; i <= n; i++) {
		cout << mom[i] << '\n';
	}
}*/