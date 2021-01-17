////
////  boj4963.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/30.
////
//
//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//int n,m;
//int graph[51][51];
//int dx[8]={0,1,1,1,0,-1,-1,-1};
//int dy[8]={1,1,0,-1,-1,-1,0,1};
//bool visited[51][51];
//
//void bfs(int sx,int sy){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=true;
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<8;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||ny<0||nx>=n||ny>=m)continue;
//            if (visited[nx][ny]==true)continue;
//            if (graph[nx][ny]==0)continue;
//            visited[nx][ny]=true;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    while (cin>>m>>n){
//        if (n==0&&m==0)break;
//        memset(graph,0,sizeof(graph));
//        memset(visited,false,sizeof(visited));
//        for (int i = 0 ;i<n;i++){
//            for (int j =0 ; j<m;j++){
//                cin>>graph[i][j];
//            }
//        }
//        int count=0;
//        for (int i =0 ;i<n;i++){
//            for (int j = 0;j<m;j++){
//                if (visited[i][j]==false&&graph[i][j]==1){
//                    bfs(i,j);
//                    count++;
//                }
//            }
//        }
//        cout<<count<<'\n';
//    }
//}
