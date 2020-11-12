////
////  boj1507.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/09.
////
//
//#include <iostream>
//
//using namespace std;
//
//int n;
//int d[21][21];
//bool unused[21][21];
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            cin>>d[i][j];
//        }
//    }
//    for (int k=0;k<n;k++){
//        for (int i = 0 ; i < n;i++){
//            if (k==i)continue;
//            for (int j = 0 ; j <n;j++){
//                if (i==j)continue;
//                if (k==j)continue;
//                if (d[i][j]>d[i][k]+d[k][j]){
//                    cout<<-1<<'\n';
//                    return 0;
//                }
//                if (d[i][j]==d[i][k]+d[k][j]){
//                    unused[i][j]=true;
//                }
//            }
//        }
//    }
//    int ans=0;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j<n;j++){
//            if (unused[i][j]==false){
//                ans+=d[i][j];
//            }
//        }
//    }
//    ans/=2;
//    cout<<ans<<'\n';
//}
