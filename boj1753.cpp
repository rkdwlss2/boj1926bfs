////
////  boj1753.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/03.
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
//    Edge(int to,int cost):to(to),cost(cost){}
//};
//const int inf=987654321;
//int dist[20001];
//bool check[20001];
//vector<Edge> a[20001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    int start;
//    cin>>start;
//    for (int i = 1;i<=n;i++){
//        dist[i]=inf;
//    }
//    for (int i = 0 ; i < m;i++){
//        int x,y,z;
//        cin>>x>>y>>z;
//        a[x].push_back(Edge(y,z));
//    }
//    dist[start]=0;
//    priority_queue<pair<int,int>> pq;
//    pq.push({0,start});
//    while (!pq.empty()){
//        auto now=pq.top();pq.pop();
//        int x =now.second;
//        if (check[x]){
//            continue;
//        }
//        check[x]=true;
//        for (int i=0;i<a[x].size();i++){
//            int y=a[x][i].to;
//            if (dist[y]>dist[x]+a[x][i].cost){
//                dist[y]=dist[x]+a[x][i].cost;
//                pq.push({-dist[y],y});
//            }
//        }
//    }
//    for (int i = 1 ; i <= n;i++){
//        if (dist[i]>=inf){
//            cout<<"INF"<<'\n';
//        }
//        else{
//            cout<<dist[i]<<'\n';
//        }
//    }
//}
//
