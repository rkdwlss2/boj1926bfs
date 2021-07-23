////
////  boj11403.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/19.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int n;
//int board[101][101];
//bool visited[101][101];
//int answer[101][101];
//void bfs(int sx){
//    queue<int> q;
//    q.push(sx);
//    visited[sx][sx]=true;
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        for (int next = 0 ;next<n;next++){
//            if (now==next)continue;
//            if (board[now][next]==0)continue;
//            if (visited[now][next]==true)continue;
//            visited[now][next]=true;
//            answer[sx][next]=1;
//            q.push(next);
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ;j<n;j++){
//            cin>>board[i][j];
//        }
//    }
//    for (int i = 0;i<n;i++){
//        memset(visited,false,sizeof(visited));
//        bfs(i);
//    }
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ;j<n;j++){
//            cout<<answer[i][j]<<' ';
//        }
//        cout<<'\n';
//    }
//
//}
