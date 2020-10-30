////
////  boj2252.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/29.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int n,m;
//vector<int> graph[32001];
//int indegree[32001];
//
//void bfs(){
//    queue<int> q;
//    for (int i = 1 ; i<=n;i++){
//        if (indegree[i]==0){
//            q.push(i);
//            cout<<i<<' ';
//        }
//    }
//    while(!q.empty()){
//        int now = q.front();q.pop();
//        for (int dir = 0 ; dir < graph[now].size();dir++){
//            indegree[graph[now][dir]]-=1;
//            if (indegree[graph[now][dir]]==0){
//                q.push(graph[now][dir]);
//                cout<<graph[now][dir]<<' ';
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    while(m--){
//        int a,b;
//        cin>>a>>b;
//        graph[a].push_back(b);
//        indegree[b]++;
//    }
//    bfs();
//    cout<<'\n';
//}
