////
////  boj1012.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/03.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n,m;
//
//int board[51][51];
//
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//void bfs(int sx,int sy){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    board[sx][sy]=0;
//    while(!q.empty()){
//        pair<int,int> now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||ny<0||nx>=n||ny>=m)continue;
//            if (board[nx][ny]==0)continue;
//            board[nx][ny]=0;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        int k;
//        cin>>m>>n>>k;
//        for (int i = 0 ; i<51;i++){
//            fill(board[i],board[i]+51,0);
//        }
//        while(k--){
//            int x,y;
//            cin>>y>>x;
//            board[x][y]=1;
//        }
//        int count=0;
//        for (int i=0;i<n;i++){
//            for (int j=0;j<m;j++){
//                if (board[i][j]==1){
//                    bfs(i,j);
//                    count++;
//                }
//            }
//        }
//        cout<<count<<'\n';
//    }
//}
