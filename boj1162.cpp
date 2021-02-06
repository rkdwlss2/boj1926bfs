////
////  boj1162.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/09.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//struct Edge{
//    int to;
//    int cost;
//    Edge(int to,int cost):to(to),cost(cost){}
//};
//vector<Edge> a[10001];
//long long dist[10001][21];
//bool check[10001][21];
//long long inf = 1000000000LL*50000LL;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m,k;
//    cin>>n>>m>>k;
//    for (int i=0;i<m;i++){
//        int x,y,z;
//        cin>>x>>y>>z;
//        a[x].push_back(Edge(y,z));
//        a[y].push_back(Edge(x,z));
//    }
//    for (int i=1;i<=n;i++){
//        for (int j=0;j<=k;j++){
//            dist[i][j]=inf;
//        }
//    }
//    dist[1][0]=0;
//    priority_queue<tuple<long long,int,int>> q;
//    q.push(make_tuple(0,1,0));
//    while (!q.empty()){
//        auto p=q.top();
//        q.pop();
//        int x=get<1>(p);
//        int step=get<2>(p);
//        if (check[x][step]==true)continue;
//        check[x][step]=true;
//        for (int i=0;i<a[x].size();i++){
//            int y=a[x][i].to;
//            if (step+1<=k&&dist[y][step+1]>dist[x][step]){
//                dist[y][step+1]=dist[x][step];
//                q.push(make_tuple(-dist[y][step+1],y,step+1));
//            }
//            if (dist[y][step]>dist[x][step]+a[x][i].cost){
//                dist[y][step]=dist[x][step]+a[x][i].cost;
//                q.push(make_tuple(-dist[y][step],y,step));
//            }
//        }
//    }
//    long long ans=inf;
//    for (int i=1;i<=k;i++){
//        if (check[n][i]&&ans>dist[n][i]){
//            ans=dist[n][i];
//        }
//    }
//    cout<<ans<<'\n';
//    
//}
