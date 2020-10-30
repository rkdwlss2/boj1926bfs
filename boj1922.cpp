////
////  boj1922.cpp
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
//struct Edge{
//    int to;
//    int cost;
//    bool operator < (const Edge Other) const{
//        return cost>Other.cost;
//    }
//};
//
//vector<Edge> graph[1001];
//bool check[1001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    while(m--){
//        int from,to,cost;
//        cin>>from>>to>>cost;
//        graph[from].push_back({to,cost});
//        graph[to].push_back({from,cost});
//    }
//    check[1]=true;
//    priority_queue<Edge> pq;
//    for (Edge i : graph[1]){
//        pq.push(i);
//    }
//    int ans=0;
//    while (!pq.empty()){
//        Edge now = pq.top();pq.pop();
//        if (check[now.to]==true)continue;
//        check[now.to]=true;
//        ans+=now.cost;
//        int x=now.to;
//        for (Edge ee : graph[x]){
//            pq.push(ee);
//        }
//    }
//    cout<<ans<<'\n';
//}
