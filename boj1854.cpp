////
////  boj1854.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/09.
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
//vector<Edge> a[10001];
//priority_queue<int> dist[10001];
//int inf=1000000000;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m,k;
//    cin>>n>>m>>k;
//    for (int i=0;i<m;i++){
//        int x,y,z;
//        cin>>x>>y>>z;
//        a[x].push_back(Edge(y,z));
//    }
//    dist[1].push(0);
//    priority_queue<pair<int,int>> q;
//    q.push(make_pair(0,1));
//    while(!q.empty()){
//        auto p=q.top();
//        q.pop();
//        int cur=-p.first;
//        int x=p.second;
//        for (int i=0;i<a[x].size();i++){
//            int y=a[x][i].to;
//            if (dist[y].size()<k||dist[y].top()>cur+a[x][i].cost){
//                if (dist[y].size()==k){
//                    dist[y].pop();
//                }
//                dist[y].push(cur+a[x][i].cost);
//                q.push(make_pair(-(cur+a[x][i].cost),y));
//            }
//        }
//    }
//    for (int i=1;i<=n;i++){
//        if (dist[i].size()!=k){
//            cout<<-1<<'\n';
//        }else{
//            cout<<dist[i].top()<<'\n';
//        }
//    }
//}
