////
////  boj14502.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/13.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int n,m;
//int board[9][9];
//bool visited[9][9];
//vector<pair<int,int>> v;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int answer=0;
//void bfs(int sx,int sy){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=true;
//    while (!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir = 0 ; dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (board[nx][ny]==1||visited[nx][ny]==true)continue;
//            visited[nx][ny]=true;
//            q.push({nx,ny});
//        }
//    }
//}
//
//void go(int index,int num){
//    if (num>m*n)return;
//    if (index==3){
//        for (int i = 0 ; i<9;i++){
//            fill(visited[i],visited[i]+9,false);
//        }
//        for (auto i : v){
//            bfs(i.first,i.second);
//        }
//        int sum=0;
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j <m;j++){
//                if (visited[i][j]==false&&board[i][j]==0){
//                    sum++;
//                }
//            }
//        }
//        if (sum>answer){
//            answer=sum;
//        }
//        return;
//    }
//    int x=num/m;
//    int y=num%m;
//    if (board[x][y]==2||board[x][y]==1){
//        go(index,num+1);
//    }else{
//        board[x][y]=1;
//        go(index+1,num+1);
//        board[x][y]=0;
//        go(index,num+1);
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < m;j++){
//            cin>>board[i][j];
//            if (board[i][j]==2){
//                v.push_back({i,j});
//            }
//        }
//    }
//    go(0,0);
//    cout<<answer<<'\n';
//}
