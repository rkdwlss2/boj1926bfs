////
////  boj11404.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/05.
////
//
//#include <iostream>
//using namespace std;
//
//int n,m;
//int INF=987654321;
//int dist[101][101];
//
//void floyd(){
//    for (int k=1;k<=n;k++){
//        for (int i=1;i<=n;i++){
//            for (int j =1;j<=n;j++){
//                if (dist[i][j]>dist[i][k]+dist[k][j]){
//                    dist[i][j]=dist[i][k]+dist[k][j];
//                }
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >>n>>m;
//    for (int i=0;i<101;i++){
//        fill(dist[i],dist[i]+101,INF);
//    }
//    for (int i =0;i<101;i++){
//        for (int j=0;j<101;j++){
//            if (i==j){
//                dist[i][j]=0;
//            }
//        }
//    }
//    for (int i =0;i<m;i++){
//        int from,to,cost;
//        cin>>from>>to>>cost;
//        dist[from][to]=min(cost,dist[from][to]);
//    }
//    
//    floyd();
//    for (int i=1;i<=n;i++){
//        for (int j = 1 ;j<=n;j++){
//            if (dist[i][j]>=INF){
//                cout<<0<<' ';
//            }
//            else{
//                cout<<dist[i][j]<<' ';
//            }
//            
//        }
//        cout<<'\n';
//    }
//}
