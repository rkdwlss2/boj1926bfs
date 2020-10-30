////
////  boj1766.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int n,m;
//vector<int> graph[32001];
//int indegree[32001];
//void bfs(){
//    priority_queue<int> pq;
//    for (int i = 1;i<=n;i++){
//        if (indegree[i]==0){
//            pq.push(-i);
//
//        }
//    }
//    while(!pq.empty()){
//        int now = -pq.top();pq.pop();
//        cout<<now<<' ';
//        for (int dir=0;dir<graph[now].size();dir++){
//            int y=graph[now][dir];
//            indegree[y]--;
//            if (indegree[y]==0){
//                pq.push(-y);
//
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    while (m--){
//        int x,y;
//        cin>>x>>y;
//        graph[x].push_back(y);
//        indegree[y]++;
//    }
//    bfs();
//}
