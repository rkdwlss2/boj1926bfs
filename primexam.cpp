////
////  primexam.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/02.
////
//
//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int v,e,c,k;
//vector<vector<pair<int,int>>> edge;
//priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
//bool visited[10001];
//void prim(int v);
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> v>>e;
//    edge.resize(v+1);
//    int x,y,z;
//    for (int i = 0 ; i< e;i++){
//        cin>>x>>y>>z;
//        edge[x].push_back({z,y});
//        edge[y].push_back({z,x});
//    }
//    prim(1);
//    cout<<k<<'\n';
//}
//void prim(int v){
//    visited[v]=true;
//    for (auto u : edge[v]){
//        if (!visited[u.second]){
//            pq.push({u.first,u.second});
//        }
//    }
//    while(!pq.empty()){
//        auto w = pq.top();pq.pop();
//        if (!visited[w.second]){
//            k+=w.first;
//            prim(w.second);
//            return;
//        }
//    }
//}
