////
////  boj1916.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/03.
////
//
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//struct Edge{
//    int to;
//    int cost;
//    Edge(int to,int cost):to(to),cost(cost){}
//};
//int INF=987654321;
//vector<Edge> a[1001];
//int check[1001];
//int dist[1001];
//
//int main(){
//    int n;
//    scanf("%d",&n);
//    int m;
//    scanf("%d",&m);
//    for (int i = 0 ; i < m;i++){
//        int x,y,z;
//        scanf("%d %d %d",&x,&y,&z);
//        a[x].push_back(Edge(y,z));
//    }
//    for (int i = 1 ; i  <= n;i++){
//        dist[i]=INF;
//    }
//    int start,end;
//    scanf("%d %d",&start,&end);
//    dist[start]=0;
//    for (int i = 0 ; i<n-1;i++){
//        int m=INF+1;
//        int x=-1;
//        for (int j=1;j<=n;j++){
//            if (check[j]==false&&m>dist[j]){
//                m=dist[j];
//                x=j;
//            }
//        }
//        check[x]=true;
//        for (int j = 0 ; j <a[x].size();j++){
//            int y=a[x][j].to;
//            if (dist[y]>dist[x]+a[x][j].cost){
//                dist[y]=dist[x]+a[x][j].cost;
//            }
//        }
//    }
//    printf("%d\n",dist[end]);
//}
