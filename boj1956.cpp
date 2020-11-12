////
////  boj1956.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/10.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int dist[401][401];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i <m;i++){
//        int x,y,c;
//        cin>>x>>y>>c;
//        if (dist[x][y]==0){
//            dist[x][y]=c;
//        }else if (dist[x][y]>c){
//            dist[x][y]=c;
//        }
//        
//    }
//    for (int k =1;k<=n;k++){
//        for (int i = 1;i<=n;i++){
//            for (int j = 1; j<=n;j++){
//                if (dist[i][k]!=0&&dist[k][j]!=0){
//                    if (dist[i][j]==0||dist[i][j]>dist[i][k]+dist[k][j]){
//                        dist[i][j]=dist[i][k]+dist[k][j];
//                    }
//                }
//            }
//        }
//    }
//    int ans=-1;
//    for (int i = 1;i<=n;i++){
//        if (dist[i][i]!=0){
//            if (ans==-1||(ans>dist[i][i])){
//                ans=dist[i][i];
//            }
//        }
//    }
//    cout<<ans<<'\n';
//}
