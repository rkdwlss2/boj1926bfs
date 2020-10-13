////
////  tomato.cpp
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
//int n,m;
//int board[1001][1001];
//bool vis[1001][1001];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//void dfs(int x,int y,queue<pair<int, int>> Q){
//    while(!Q.empty()){
//        pair<int,int> cur=Q.front();Q.pop();
//        for (int dir = 0 ; dir<4;dir++){
//            int nx=cur.X+dx[dir];
//            int ny=cur.Y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (vis[nx][ny]==true||board[nx][ny]!=0)continue;
//            vis[nx][ny]=true;
//            board[nx][ny]=board[cur.X][cur.Y]+1;
//            Q.push({nx,ny});
//        }
//    }
//}
//int main(void){
//    cin>>n>>m;
//    queue<pair<int,int>> Q;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j < m;j++){
//            cin>>board[i][j];
//            if (board[i][j]==1){
//                Q.push({i,j});
//                vis[i][j]=true;
//            }
//        }
//    }
//    dfs(0,0,Q);
//    int ans=1;
//    bool ok=true;
//    for (int i =0;i<n;i++){
//        for (int j = 0 ; j < m;j++){
//            int tmp=board[i][j];
//            if (tmp == 0){
//                ok=false;
//                break;
//            }
//            if (ans<tmp)ans=tmp;
//        }
//        if (ok==false)break;
//    }
//    if (ok==false){
//        cout<<-1<<'\n';
//    }
//    else{
//        cout<<ans-1<<'\n';
//    }
//}
