////
////  boj1197.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/30.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int p[10001];
//
//struct Edge{
//    int from;
//    int to;
//    int cost;
//    bool operator < (const Edge& other) const{
//        return cost<other.cost;
//    }
//};
//
//int Find(int x){
//    if (x == p[x]){
//        return x;
//    }else{
//        return p[x]=Find(p[x]);
//    }
//}
//void Union(int x,int y){
//    x=Find(x);
//    y=Find(y);
//    p[x]=y;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    for (int i=1;i<=n;i++){
//        p[i]=i;
//    }
//    vector<Edge> v;
//    int tmp=m;
//    while (tmp--){
//        int from,to,cost;
//        cin>>from>>to>>cost;
//        v.push_back({from,to,cost});
//    }
//    sort(v.begin(),v.end());
//    int ans=0;
//    for (int i = 0 ; i <m;i++){
//        Edge e=v[i];
//        int x=Find(e.from);
//        int y=Find(e.to);
//        if (x!=y){
//            Union(e.from,e.to);
//            ans+=e.cost;
//        }
//    }
//    cout<<ans<<'\n';
//}
