////
////  bfsexample2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/09/30.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//#define X first
//#define Y second
//int board[502][502]={{1,1,1,0,1,0,0,0,0,0},
//                         {1,0,0,0,1,0,0,0,0,0},
//                         {1,1,1,0,1,0,0,0,0,0},
//                         {1,1,0,0,1,0,0,0,0,0},
//                         {0,1,0,0,0,0,0,0,0,0},
//                         {0,0,0,0,0,0,0,0,0,0},
//                         {0,0,0,0,0,0,0,0,0,0}};
//bool vis[502][502];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int n = 7,m=10;
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    queue<pair<int,int>> Q;
//    Q.push({0,0});
//    vis[0][0]=true;
//    while (!Q.empty()){
//        pair<int,int> cur = Q.front();Q.pop();
//        cout<<cur.X<<", "<<cur.Y<<'\n';
//        for (int dir =0 ; dir<4;dir++){
//            int nx =cur.X+dx[dir];
//            int ny=cur.Y+dy[dir];
//            if(nx<0||nx>=n||ny<0||ny>=m)continue;
//            if(vis[nx][ny]==true||board[nx][ny]==0)continue;
//            vis[nx][ny]=true;
//            Q.push({nx,ny});
//        }
//    }
//}
