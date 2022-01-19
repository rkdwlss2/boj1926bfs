#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
int m, n;
int map[50][50];
int visit[50][50];
bool check[50][50];
int cnt[2500];
 
 
int dx[] = { 0,-1,0,1 };
int dy[] = { -1,0,1,0 };
 
int bfs2(int x, int y) {
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    check[x][y] = true;
 
    int sum = 0;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
 
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (check[nx][ny]) continue;
 
 
            //같은 방이면 큐에 넣고
            if (visit[nx][ny] == visit[x][y]) {
                q.push(make_pair(nx, ny));
                check[nx][ny] = true;
            }
            else { //다른 방이면 그 방과 합쳐졌을 때의 넓이를 저장
                int tmp = cnt[visit[x][y]] + cnt[visit[nx][ny]];
                if (sum < tmp) sum = tmp;
            }
 
        }
    }
 
    return sum;
 
}
 
void removeWall() {
    queue<pair<int, int>> q;
 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (check[i][j]) continue;
            int tmp = bfs2(i, j);
            if (sum < tmp) sum = tmp;
        }
    }
    
    cout << sum << '\n';
}
 
int bfs(int x, int y, int num) {
    int cnt = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    visit[x][y] = num;
 
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
 
        for (int k = 0; k < 4; k++) {
            //해당 방향이 벽인 경우
            if (map[x][y] & (1 << k)) continue;
 
            int nx = x + dx[k];
            int ny = y + dy[k];
 
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (visit[nx][ny]) continue;
 
            q.push(make_pair(nx, ny));
 
            //방 번호를 기록
            visit[nx][ny] = num;
            cnt++;
        }
 
    }
 
 
    //연결된 칸의 개수를 리턴(방의 넓이)
    return cnt;
}
 
void solve() {
 
    int maxcnt = 0;
    int roomcnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visit[i][j]) continue;
 
            //bfs출발할 때마다 방의 개수 늘어난다
            int tmp = bfs(i, j, ++roomcnt);
 
            //방 별로 넓이를 저장해놓는다.
            cnt[roomcnt] = tmp;
 
            //가장 넓은 방의 넓이
            if (maxcnt < tmp) maxcnt = tmp;
        }
    }
 
    //1번 답 출력
    cout << roomcnt << "\n";
 
    //2번 답 출력
    cout << maxcnt << "\n";
 
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> m >> n;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }
 
    //1번과 2번 답을 구한다
    solve();
 
    //3번 답을 구한다
    removeWall();
 
    return 0;
}

