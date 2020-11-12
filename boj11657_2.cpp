////
////  boj11657_2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/01.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//long long dist[501];
//long long INF=100000000;
//
//struct Edge{
//    int from;
//    int to;
//    int cost;
//};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    vector<Edge> a(m);
//    for (int i = 0 ; i < m;i++){
//        cin>>a[i].from>>a[i].to>>a[i].cost;
//    }
//    for (int i = 1 ; i <=n;i++){
//        dist[i]=INF;
//    }
//    dist[1]=0;
//    bool negative = false;
//    for (int i=1;i<=n;i++){
//        for (int j = 0;j<m;j++){
//            int x= a[j].from;
//            int y=a[j].to;
//            int z=a[j].cost;
//            if (dist[x]!=INF&&dist[y]>dist[x]+z){
//                dist[y]=dist[x]+z;
//                if (i==n){
//                    negative=true;
//                }
//            }
//        }
//    }
//    if (negative){
//        cout<<-1<<'\n';
//    }else{
//        for (int i =2;i<=n;i++){
//            if (dist[i]==INF)dist[i]=-1;
//            cout<<dist[i]<<'\n';
//        }
//    }
//}
