////
////  bfsmiro.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/30.
////
//
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//#define X first
//#define Y second
//
//int board[101][101];
//bool vis[101][101];
//int n,m;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//void bfs(int x,int y){
//    queue<pair<int,int>> Q;
//    Q.push({x,y});
//    vis[x][y]=true;
//    while(!Q.empty()){
//        pair<int,int> cur=Q.front();Q.pop();
//        for (int dir =0;dir<4;dir++){
//            int nx=cur.X+dx[dir];
//            int ny=cur.Y+dy[dir];
//            if (nx<1||nx>n||ny<1||ny>m)continue;
//            if (vis[nx][ny]==true||board[nx][ny]==0)continue;
//            vis[nx][ny]=true;
//            board[nx][ny]=board[cur.X][cur.Y]+1;
//            Q.push({nx,ny});
//        }
//    }
//}
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for (int i = 0 ; i <= n ;i++){
//        string s;
//        getline(cin,s);
//        for (int j = 1 ; j <= m ; j++)
//            board[i][j]=s[j-1]-'0';
//    }
//    bfs(1,1);
//    cout<<board[n][m]<<'\n';
//}
//
