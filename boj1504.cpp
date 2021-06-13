////
////  boj1504.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/04.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//#define lli long long int
//struct Edge{
//    lli to;
//    lli cost;
//    Edge(lli to,lli cost):to(to),cost(cost){}
//};
//const lli inf=987654321;
//lli dist[801];
//bool check[801];
//vector<Edge> a[200001];
//lli n,m;
//void dijstra(lli start){
//    for (lli i=1;i<=n;i++){
//        dist[i]=inf;
//        check[i]=false;
//    }
//    priority_queue<pair<lli,lli>> pq;
//    dist[start]=0;
//    pq.push({0,start});
//    while (!pq.empty()) {
//        auto now=pq.top();pq.pop();
//        lli x=now.second;
//        if (check[x]==true)continue;
//        check[x]=true;
//        for (lli i=0;i<a[x].size();i++){
//            lli y=a[x][i].to;
//            if (dist[y]>dist[x]+a[x][i].cost){
//                dist[y]=dist[x]+a[x][i].cost;
//                pq.push({-dist[y],y});
//            }
//        }
//    }
//    
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (lli i=0;i<m;i++){
//        lli x,y,z;
//        cin>>x>>y>>z;
//        a[x].push_back(Edge(y,z));
//        a[y].push_back(Edge(x,z));
//    }
//    lli v1,v2;
//    cin>>v1>>v2;
//    lli a1,a2,a3,a4,a5,a6;
//    dijstra(1);
//    a1=dist[v1];
//    a4=dist[v2];
//    dijstra(v2);
//    a3=dist[n];
//    a5=dist[v1];
//    dijstra(v1);
//    a2=dist[v2];
//    a6=dist[n];
//    lli ans=a1+a2+a3;
//    if (ans>a4+a5+a6){
//        ans=a4+a5+a6;
//    }
//    if (ans>=inf){
//        cout<<-1<<'\n';
//    }else{
//        cout<<ans<<'\n';
//    }
//}
