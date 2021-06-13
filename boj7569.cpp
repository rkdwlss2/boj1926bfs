////
////  boj7569.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/03.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//int n,m,h;
//
//int dx[6]={0,0,1,-1,0,0};
//int dy[6]={1,-1,0,0,0,0};
//int dz[6]={0,0,0,0,1,-1};
//
//int board[101][101][101];
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>m>>n>>h;
//    queue<tuple<int,int,int>> q;
//    for (int k=0;k<h;k++){
//        for (int i = 0 ; i <n;i++){
//            for (int j=0;j<m;j++){
//                cin>>board[i][j][k];
//                if (board[i][j][k]==1){
//                    q.push({i,j,k});
//                }
//            }
//        }
//    }
//    while (!q.empty()){
//        auto now=q.front();q.pop();
//        int x=get<0>(now);
//        int y=get<1>(now);
//        int z=get<2>(now);
//        for (int dir=0;dir<6;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            int nz=z+dz[dir];
//            if (nx<0||ny<0||nz<0||nx>=n||ny>=m||nz>=h)continue;
//            if (board[nx][ny][nz]==-1||board[nx][ny][nz]>=1)continue;
//            board[nx][ny][nz]=board[x][y][z]+1;
//            q.push({nx,ny,nz});
//        }
//    }
//    int Max=-2;
//    for (int k=0;k<h;k++){
//        for (int i=0;i<n;i++){
//            for (int j=0;j<m;j++){
//                int tomato=board[i][j][k];
//                if (tomato==0){
//                    cout<<-1<<'\n';
//                    return 0;
//                }
//                if (Max<tomato){
//                    Max=tomato;
//                }
//            }
//        }
//    }
//    cout<<Max-1<<'\n';
//
//}
