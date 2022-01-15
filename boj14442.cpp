////
////  boj14442.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2022/01/14.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n,m,k;
//
//int board[1001][1001];
//int visited[1001][1001][11];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//void bfs(){
//    queue<pair<pair<int,int>,int>> q;
//    q.push({{0,0},0});
//    visited[0][0][0]=1;
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first.first;
//        int y=now.first.second;
//        int num=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (num>=k){
//                if (board[nx][ny]==1||visited[nx][ny][num]>0)continue;
//                visited[nx][ny][num]=visited[x][y][num]+1;
//                q.push({{nx,ny},num});
//            }else{
//                if (visited[nx][ny][num]>0)continue;
//                if (board[nx][ny]==1){
//                    visited[nx][ny][num+1]=visited[x][y][num]+1;
//                    q.push({{nx,ny},num+1});
//                }else{
//                    visited[nx][ny][num]=visited[x][y][num]+1;
//                    q.push({{nx,ny},num});
//                }
//            }
//        }
//        
//
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>k;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j <m;j++){
//            char tmp;
//            cin>>tmp;
//            int tmpNum=tmp-'0';
//            board[i][j]=tmpNum;
//        }
//    }
//    bfs();
////    for (int i = 0 ; i <n;i++){
////        for (int j = 0 ; j <m;j++){
////            cout<<visited[i][j]<<' ';
////        }cout<<'\n';
////    }
//    int answer=987654321;
//    for (int i = 0 ; i<11;i++){
//        if (visited[n-1][m-1][i]>0&&answer>visited[n-1][m-1][i])answer=visited[n-1][m-1][i];
//    }
//    if (answer==987654321){
//        cout<<-1<<'\n';
//    }else{
//        cout<<answer<<'\n';
//    }
////    if (visited[n-1][m-1]>0){
////        cout<<visited[n-1][m-1]<<'\n';
////    }else{
////        cout<<-1<<'\n';
////    }
//}
