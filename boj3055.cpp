////
////  boj3055.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2022/01/12.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int board[51][51];
//int n,m;
//int departX,departY;
//int startX,startY;
//queue<pair<int,int>> q;
//int visited[51][51];
//int visited2[51][51];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//void bfs(){
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        int nowV=visited[x][y];
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (board[nx][ny]==3||board[nx][ny]==2||(visited[nx][ny]!=0&&visited[nx][ny]<=nowV+1))continue;
//            visited[nx][ny]=nowV+1;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int bfs2(){
//    queue<pair<int,int>> tmpQ;
//    tmpQ.push({startX,startY});
//    visited2[startX][startY]=1;
//    while(!tmpQ.empty()){
//        auto now =tmpQ.front();tmpQ.pop();
//        int x=now.first;
//        int y=now.second;
//        int nowV=visited2[x][y];
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (board[nx][ny]==2||visited2[nx][ny]!=0||(visited[nx][ny]!=0&&visited[nx][ny]<=nowV+1))continue;
//            if (nx==departX&&ny==departY){
//                return nowV;
//            }
//            visited2[nx][ny]=nowV+1;
//            tmpQ.push({nx,ny});
//        }
//    }
//    return -1;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i =0;i<n;i++){
//        for (int j =0;j<m;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='*'){
//                q.push({i,j});
//                visited[i][j]=1;
//            }else if (tmp=='X'){
//                board[i][j]=2;
//            }else if (tmp=='D'){
//                departX=i;
//                departY=j;
//                board[i][j]=3;
//            }else if (tmp=='S'){
//                startX=i;
//                startY=j;
//            }
//        }
//    }
//    bfs();
//    while(!q.empty())q.pop();
//    int answer=bfs2();
////    for (int i = 0 ; i <n;i++){
////        for (int j = 0 ; j <m;j++){
////            cout<<visited[i][j]<<' ';
////        }cout<<'\n';
////    }
////    for (int i = 0 ; i <n;i++){
////        for (int j = 0 ; j <m;j++){
////            cout<<visited2[i][j]<<' ';
////        }cout<<'\n';
////    }
//    if (answer==-1){
//        cout<<"KAKTUS"<<'\n';
//    }else{
//        cout<<answer<<'\n';
//    }
//}
