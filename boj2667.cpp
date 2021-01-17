////
////  boj2667.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/30.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n;
//int graph[26][26];
//bool visited[26][26];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int bfs(int sx,int sy){
//    int count=1;
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=true;
//    while(!q.empty()){
//        pair<int,int> now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||ny<0||nx>=n||ny>=n)continue;
//            if (graph[nx][ny]!=1)continue;
//            if (visited[nx][ny]==true)continue;
//            visited[nx][ny]=true;
//            count++;
//            q.push({nx,ny});
//        }
//    }
//    return count;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ;j<n;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='1'){
//                graph[i][j]=1;
//            }else{
//                graph[i][j]=0;
//            }
//        }
//    }
//    vector<int> answer;
//    for (int i = 0 ;i<n;i++){
//        for (int j = 0 ;j<n;j++){
//            if (visited[i][j]==false&&graph[i][j]==1){
//                answer.push_back(bfs(i,j));
//            }
//        }
//    }
//    sort(answer.begin(),answer.end());
//    cout<<answer.size()<<'\n';
//    for (auto i : answer){
//        cout<<i<<'\n';
//    }
//}
