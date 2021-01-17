////
////  boj10026.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/04.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n;
//
//int rgb[3]={'R','G','B'};
//
//int board[101][101];
//int acBoard[101][101];
//bool visited[101][101];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//void bfs(int sx,int sy,int ac){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=true;
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        int color=acBoard[x][y];
//        if (ac==0){
//            color=board[x][y];
//        }
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            int nextColor=acBoard[nx][ny];
//            if (ac==0){
//                nextColor=board[nx][ny];
//            }
//            if (nx<0||ny<0||nx>=n||ny>=n)continue;
//            if (visited[nx][ny]==true||color!=nextColor)continue;
//            visited[nx][ny]=true;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ;i<n;i++){
//        for (int j = 0 ;j<n;j++){
//            char tmp;
//            cin>>tmp;
//            for (int r=0;r<3;r++){
//                if (tmp==rgb[r]){
//                    board[i][j]=r+1;
//                    if (r<2){
//                        acBoard[i][j]=1;
//                    }else{
//                        acBoard[i][j]=r+1;
//                    }
//                }
//            }
//        }
//    }
//    int count=0;
//    for (int i = 0 ; i<n;i++){
//        for (int j=0;j<n;j++){
//            if (visited[i][j]==false){
//                bfs(i,j,0);
//                count++;
//            }
//        }
//    }
//    for (int i=0;i<101;i++){
//        fill(visited[i],visited[i]+101,false);
//    }
//    int acCount=0;
//    for (int i = 0 ;i<n;i++){
//        for (int j=0;j<n;j++){
//            if (visited[i][j]==false){
//                bfs(i,j,1);
//                acCount++;
//            }
//        }
//    }
//    cout<<count<<' '<<acCount<<'\n';
//
//
//}
