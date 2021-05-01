////
////  boj2468.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/04/11.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int high,n;
//int board[101][101];
//bool visited[101][101];
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
//        for (int i = 0 ; i < 4;i++){
//            int nx=x+dx[i];
//            int ny=y+dy[i];
//            if (nx<0||nx>=n||ny<0||ny>=n)continue;
//            if (visited[nx][ny]==true||board[nx][ny]<=high)continue;
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
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            cin>>board[i][j];
//        }
//    }
//    int answer=0;
//    for (int k = 0 ; k <=101;k++){
//        high=k;
//        memset(visited,false,sizeof(visited));
//        int count=0;
//        for (int i = 0 ; i < n; i++){
//            for (int j = 0 ; j <n;j++){
//                if (visited[i][j]==false&&board[i][j]>high){
//                    bfs(i,j);
//                    count++;
//                }
//            }
//        }
//        if (answer<count)answer=count;
//    }
//    cout<<answer<<'\n';
//}
