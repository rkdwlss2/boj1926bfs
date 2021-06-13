////
////  boj2606.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/27.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int v,e;
//vector<vector<int>> graph;
//bool visited[101];
//int answer=0;
//void bfs(){
//    queue<int> q;
//    q.push(1);
//    visited[1]=true;
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        for (int next = 0;next<graph[now].size();next++){
//            int NextNode=graph[now][next];
//            if (visited[NextNode]==true)continue;
//            visited[NextNode]=true;
//            answer++;
//            q.push(NextNode);
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>v>>e;
//    graph.resize(v+1);
//    for (int i=0;i<e;i++){
//        int from,to;
//        cin>>from>>to;
//        graph[from].push_back(to);
//        graph[to].push_back(from);
//    }
//    bfs();
//    cout<<answer<<'\n';
//}
