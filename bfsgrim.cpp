////
////  bfsgrim.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/30.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define X first
//#define Y second
//
//bool vis[501][501];
//int board[501][501];
//int n,m;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//int bfs(int x, int y){
//    queue<pair<int,int>> Q;
//    vis[x][y]=true;
//    Q.push({x,y});
//    int count=1;
//    while (!Q.empty()){
//        pair<int,int> cur=Q.front();Q.pop();
//        for (int dir = 0 ; dir<4;dir++){
//            int nx = cur.X+dx[dir];
//            int ny = cur.Y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (vis[nx][ny]==true||board[nx][ny]!=1)continue;
//            vis[nx][ny]=true;
//            count++;
//            Q.push({nx,ny});
//        }
//    }
//    return count;
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >>n>>m;
//    for (int i = 0 ; i< n ; i++){
//        for (int j = 0 ; j < m ; j++){
//            cin>>board[i][j];
//        }
//    }
//    int ans=0;
//    int grim=0;
//    for (int i = 0 ; i < n ; i++){
//        for (int j =0;j<m;j++){
//            if (board[i][j]==1 && vis[i][j]==false){
//                grim++;
//                int tmp=bfs(i,j);
//                if (ans<tmp)ans=tmp;
//            }
//        }
//    }
//    cout<<grim<<'\n';
//    cout<<ans<<'\n';
//}
