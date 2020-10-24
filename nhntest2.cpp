////
////  nhntest2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/24.
////
//
//#include <iostream>
//
//using namespace std;
//int n,m;
//
//int arr[101][101];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n>>m;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    int ans=0;
//    for (int i = 0 ; i < n;i++){
//        int max1=arr[i][0];
//        int nowmin1=-1;
//        int tmpans=0;
//        int index=0;
//        for (int j = 1 ;j<m;j++){
//            if (max1<arr[i][j]){
//                if (nowmin1<arr[i][j]){
//                    tmpans+=(max1-nowmin1)*index;
//                }
//                int tindex=index;
//                for (int i1=tindex;i1>0;i1--){
//                    arr[i][j-tindex]=max1;
//                }
//                max1=arr[i][j];
//                nowmin1=0;
//                index=0;
//            }
//            else {
//                if (nowmin1<arr[i][j]){
//                    tmpans+=(arr[i][j]-nowmin1)*index;
//                    int tindex=index;
//                    for (int i1=tindex;i1>0;i1--){
//                        arr[i][j-tindex]=nowmin1;
//                    }
//                }
//                nowmin1=arr[i][j];
//                index++;
//            }
//            
//        }
//        ans+=tmpans;
//    }
//    cout<<ans<<'\n';
//}
