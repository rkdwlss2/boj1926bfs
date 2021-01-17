////
////  boj2583.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/04.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int m,n;
//
//int board[101][101];
//bool visited[101][101];
//
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//vector<int> answer;
//bool check(int nx,int ny){
//    return nx<0||ny<0||nx>=n||ny>=m;
//}
//
//int bfs(int sx,int sy){
//    queue<pair<int,int>> q;
//    q.push(make_pair(sx,sy));
//    visited[sx][sy]=true;
//    int count=1;
//    while(!q.empty()){
//        pair<int,int> now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir =0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (check(nx,ny))continue;
//            if (visited[nx][ny]==true||board[nx][ny]==1)continue;
//            visited[nx][ny]=true;
//            count++;
//            q.push(make_pair(nx,ny));
//        }
//    }
//    return count;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int k;
//    cin>>n>>m>>k;
//    while(k--){
//        int y1,x1,y2,x2;
//        cin>>y1>>x1>>y2>>x2;
//        for (int i=x1;i<x2;i++){
//            for (int j=y1;j<y2;j++){
//                board[i][j]=1;
//            }
//        }
//    }
//    for (int i=0;i<n;i++){
//        for (int j = 0 ;j<m;j++){
//            if (board[i][j]==0&&visited[i][j]==false){
//                answer.push_back(bfs(i,j));
//            }
//        }
//    }
//    sort(answer.begin(),answer.end());
//    cout<<answer.size()<<'\n';
//    for (auto i : answer){
//        cout<<i<<' ';
//    }
//    cout<<'\n';
//}
