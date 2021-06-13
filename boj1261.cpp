////
////  boj1261.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/03.
////
//
//#include <iostream>
//#include <queue>
//#include <tuple>
//#include <cstring>
//using namespace std;
//
//const int inf =9876543;
//int n,m;
//int board[101][101];
//bool visited[101][101];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int dist[101][101];
//
//void dijstra(){
//    priority_queue<pair<int,pair<int, int>>> pq;
//    pq.push({0,{1,1}});
//    visited[1][1]=true;
//    while (!pq.empty()){
//        auto now = pq.top();
//        pq.pop();
//        int cost=-now.first;
//        int x=now.second.first;
//        int y=now.second.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<1||ny<1||nx>n||ny>m)continue;
//            if (visited[nx][ny]==true)continue;
//            if (cost+board[nx][ny]>dist[nx][ny])continue;
//            visited[nx][ny]=true;
//            dist[nx][ny]=cost+board[nx][ny];
//            pq.push({-board[nx][ny],{nx,ny}});
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>m>>n;
//    for (int i=1;i<=n;i++){
//        for (int j=1;j<=m;j++){
//            char tmp;
//            cin>>tmp;
//            board[i][j]=tmp-'0';
//        }
//    }
//    memset(dist,inf,sizeof(dist));
//    dijstra();
//    cout<<dist[n][m]<<'\n';
//}
