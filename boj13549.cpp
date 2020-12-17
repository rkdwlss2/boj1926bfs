////
////  boj13549.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/05.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int n,k;
//struct Edge{
//    int to;
//    int cost;
//    Edge(int to,int cost):to(to),cost(cost){}
//};
//const int inf=987654321;
//int dist[100001];
//bool check[100001];
//vector<Edge> a[100001];
//int dijstra(int start){
//    for (int i=0;i<=100000;i++){
//        dist[i]=inf;
//        check[i]=false;
//    }
//    priority_queue<pair<int,int>> pq;
//    dist[start]=0;
//    pq.push({0,start});
//    while(!pq.empty()){
//        auto now = pq.top();
//        pq.pop();
//        int x=now.second;
//        if (check[x]==true)continue;
//        if (x==k){
//            return -now.first;
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
//    return -1;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k;
//    for (int i=0;i<=100000;i++){
//        if (i-1>=0){
//            a[i].push_back(Edge(i-1,1));
//        }
//        if (i+1<=100000){
//            a[i].push_back(Edge(i+1,1));
//        }
//        if (i*2<=100000){
//            a[i].push_back(Edge(2*i,0));
//        }
//    }
//    cout<<dijstra(n)<<'\n';
//}
