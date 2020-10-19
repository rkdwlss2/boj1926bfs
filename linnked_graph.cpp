////
////  linnked_graph.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/18.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//vector<int> adj[10];
//int dist[10];
//void bfs(){
//    for (int i =1;i<10;i++)dist[i]=-1;
//    queue<int> q;
//    q.push(1);
//    dist[1]=0;
//    while(!q.empty()){
//        int cur = q.front();q.pop();
//        for (int i=0;i<adj[cur].size();i++){
//            int nxt=adj[cur][i];
//            if (dist[nxt]!=-1)continue;
//            q.push(nxt);
//            dist[nxt]=dist[cur]+1;
//        }
//    }
//}
