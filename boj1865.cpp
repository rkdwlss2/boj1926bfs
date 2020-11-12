////
////  boj1865.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/01.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,m,w;
//long long dist[501];
//long long INF =987654321;
//
//struct Edge{
//    int from;
//    int to;
//    int cost;
//};
//vector<Edge> e;
//
//bool bellmanford(int Start,int End,int Time){
//    for (int i = 1 ; i <= n;i++)dist[i]=INF;
//    dist[Start]=0;
//    m=2*m+w;
//    for (int i = 0;i<n;i++){
//        for (int j = 0 ; j <m;j++){
//            in5t x=e[j].from;
//            int y=e[j].to;
//            int z=e[j].cost;
//            if (dist[x]!=INF&&dist[y]>dist[x]+z){
//                dist[y]=dist[x]+z;
//            }
//        }
//    }
//    if (dist[End]<=Time){
//        return true;
//    }
//    else{
//        return false;
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        cin>>n>>m>>w;
//        for (int i = 0 ; i < m;i++){
//            int from,to,cost;
//            cin>>from>>to>>cost;
//            Edge tmp;
//            tmp.from=from;
//            tmp.to=to;
//            tmp.cost=cost;
//            e.push_back(tmp);
//            tmp.from=to;
//            tmp.from=from;
//            e.push_back(tmp);
//        }
//        for (int i=0;i<w;i++){
//            int start,end,time;
//            cin>>start>>end>>time;
//            Edge tmp;
//            tmp.from=start;
//            tmp.to=end;
//            tmp.cost=time;
//            e.push_back(tmp);
//            if (bellmanford(start, end, time)){
//                cout<<"YES"<<'\n';
//            }
//            else{
//                cout<<"NO"<<'\n';
//            }
//        }
//    }
//}
