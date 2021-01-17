////
////  boj2573.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/04.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int n,m;
//
//int board[301][301];
//int noc[301][301];
//bool visited[301][301];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//void bfs(int sx,int sy){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=true;
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||ny<0||nx>=n||ny>=m)continue;
//            if (visited[nx][ny]==true||board[nx][ny]==0)continue;
//            visited[nx][ny]=true;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i<n;i++){
//        for (int j=0;j<m;j++){
//            cin>>board[i][j];
//        }
//    }
//    int year=0;
//    while (true){
//        memset(visited,false,sizeof(visited));
//        int count=0;
//        for (int i=0;i<n;i++){
//            for (int j=0;j<m;j++){
//                if (visited[i][j]==false&&board[i][j]>0){
//                    bfs(i,j);
//                    count++;
//                }
//            }
//        }
//        if (count>=2){
//            cout<<year<<'\n';
//            break;
//        }
//        year++;
//        for (int i = 0 ;i<n;i++){
//            for (int j = 0 ;j<m;j++){
//                if (board[i][j]>0){
//                    int x=i;
//                    int y=j;
//                    int count=0;
//                    for (int dir =0 ;dir<4;dir++){
//                        int nx=x+dx[dir];
//                        int ny=y+dy[dir];
//                        if (board[nx][ny]==0){
//                            count++;
//                        }
//                    }
//                    noc[x][y]=count;
//                }
//            }
//        }
//        for (int i = 0 ;i<n;i++){
//            for (int j=0;j<m;j++){
//                if (noc[i][j]>0){
//                    if (board[i][j]-noc[i][j]<0)board[i][j]=0;
//                    else board[i][j]-=noc[i][j];
//                    noc[i][j]=0;
//                }
//            }
//        }
//        int zero=0;
//        for (int i = 0 ; i<n;i++){
//            for (int j = 0 ;j<m;j++){
//                if (board[i][j]>0){
//                    zero++;
//                }
//            }
//        }
//        if (zero==0){
//            cout<<0<<'\n';
//            break;
//        }
//    }
//}
