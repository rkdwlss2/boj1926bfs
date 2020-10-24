////
////  nhntest2_2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/24.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int arr[101][101];
//int arr2[101][101];
//int height[7];
//
//int fill1(){
//    int left,right;
//    left=0;
//    right=0;
//    int count=0;
//    for (int i1=0;i1<101;i1++){
//        for (int col=0;col<m;col++){
//            if (arr[i1][col]==1){
//                right=col;
//                for (int in1=left+1;in1<right;in1++){
//                    arr[i1][in1]=1;
//                    count++;
//                }
//                left=col;
//            }
//        }
//    }
//    return count;
//}
//void make_arrary(){
//    for (int j=0;j<m;j++){
//        int now=height[j];
//        for (int k=0;k<now;k++){
//            arr[k][j]=1;
//        }
//    }
//}
//void find_height(){
//    for (int j =0;j<m;j++){
//        for (int i=0;i<101;i++){
//            if (arr[i][j]==1){
//                height[j]=i+1;
//            }
//        }
//    }
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i=0;i<n;i++){
//        for (int j=0;j<m;j++){
//            cin>>arr2[i][j];
//        }
//    }
//    int ans=0;
//    for (int i=0;i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            height[j]+=arr2[i][j];
//        }
//        make_arrary();
//        int tans=fill1();
//        ans+=tans;
//        find_height();
//    }
//    cout<<ans<<'\n';
//}
