////
////  boj2098.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/14.
////
//
//#include <iostream>
//using namespace std;
//
//int n;
//int w[17][17];
//int dist[17][1<<17];
//int inf =987654321;
//int first;
//int shortestpath(int here,int visited){
//    if (visited==(1<<n)-1)return w[here][first]?w[here][first]:inf;
//    int& ret=dist[here][visited];
//    if (ret!=-1)return ret;
//    ret=inf;
//  
//    for (int next = 0 ;next<n;++next){
//        if (visited&(1<<next))continue;
//        if (w[here][next]==0)continue;
//        int cand=w[here][next]+shortestpath(next, visited+(1<<next));
//        ret=min(ret,cand);
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i  < n ;i++){
//        for (int j = 0 ; j <n;j++){
//            cin>>w[i][j];
//        }
//    }
//    int ret=inf;
////    for (int i = 0 ;i<17;i++){
////        fill(dist[i],dist[i]+(1<<17),-1);
////    }
////    memset(dist,-1,sizeof(dist));
////    CLEAR(dist,-1);
//    for (int i = 0 ; i<n;i++){
////        memset(dist,-1,sizeof(dist));
//        for (int i = 0 ;i<17;i++){
//                fill(dist[i],dist[i]+(1<<17),-1);
//            }
//        first=i;
//        ret=min(ret,shortestpath(i, 1<<i));
//    }
//    cout<<ret<<'\n';
//}
