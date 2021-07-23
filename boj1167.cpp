/*#include <stdio.h>
#include <algorithm>
#include <vector>
#define X first
#define Y second
using namespace std;
typedef pair<int, int> PAIR; // idx, dist
int V;
int d = 0; // Ʈ���� ����
vector<PAIR> edge[100003];
bool isVisited[100003];
int longest_child(int root) { // root�� �ڽĵ� �߿��� root�� ���� �� ���� distance
	int mx1 = 0; // ���� �� dist
	int mx2 = 0; // �ι�°�� �� dist. d = max(d, mx1+mx2)�� �������ֱ� ���ؼ�.
	for (auto child : edge[root]) {
		if (isVisited[child.X]) // �̹� �湮�� �ڽ��� ����
			continue;
		isVisited[child.X] = true; // �湮�ߴٰ� ���
		int dist = longest_child(child.X) + child.Y; // recursive�ϰ� ó��
		if (dist > mx1) {
			mx2 = mx1;
			mx1 = dist;
		}
		else if (dist > mx2) {
			mx2 = dist;
		}
	}
	d = max(d, mx1 + mx2);
	return mx1;
}
int main(void) {
	scanf("%d", &V);
	for (int i = 0; i < V; i++) {
		int v;
		scanf("%d", &v);
		while (true) {
			int a;
			scanf("%d", &a);
			if (a == -1)
				break;
			else {
				int b;
				scanf("%d", &b);
				edge[v].push_back({ a,b });
			}
		}
	}
	isVisited[1] = true;
	longest_child(1);
	printf("%d", d);
}*/