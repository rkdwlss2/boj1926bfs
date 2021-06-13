////
////  boj1238.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/04.
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
//int dist[1001];
//int dist2[1001];
//bool check[1001];
//vector<Edge> a[1001];
//int n,m,x;
//
//void dijstra(int start){
//    for (int i=1;i<=n;i++){
//        dist[i]=inf;
//        check[i]=false;
//    }
//    dist[start]=0;
//    priority_queue<pair<int,int>> pq;
//    pq.push({0,start});
//    while(!pq.empty()){
//        auto now=pq.top();pq.pop();
//        int x=now.second;
//        if (check[x]==true)continue;
//        check[x]=true;
//        for (int i=0;i<a[x].size();i++){
//            int y=a[x][i].to;
//            if (dist[y]>dist[x]+a[x][i].cost){
//                dist[y]=dist[x]+a[x][i].cost;
//                pq.push({-dist[y],y});
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>x;
//    for (int i=0;i<m;i++){
//        int x,y,z;
//        cin>>x>>y>>z;
//        a[x].push_back(Edge(y,z));
//    }
//    int ans=-1;
//    dijstra(x);
//    for (int i=1;i<=n;i++){
//        dist2[i]=dist[i];
//    }
//    for (int i=1;i<=n;i++){
//        dijstra(i);
//        if (ans<dist[x]+dist2[i]){
//            ans=dist[x]+dist2[i];
//        }
//    }
//    cout<<ans<<'\n';
//}
