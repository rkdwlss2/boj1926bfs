////
////  boj2740.cpp
////  boj10039
////
////  Created by 강명진 on 2021/04/03.
////
//
//#include <iostream>
//
//using namespace std;
//int a[101][101];
//int b[101][101];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,m;
//    cin>>n>>m;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j<m;j++){
//            cin>>a[i][j];
//        }
//    }
//    int n1,m1;
//    cin>>n1>>m1;
//    for (int i = 0 ; i <n1;i++){
//        for (int j = 0 ; j <m1;j++){
//            cin>>b[i][j];
//        }
//    }
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<m1;j++){
//            int sum=0;
//            for (int k = 0 ; k<m;k++){
//                sum+=a[i][k]*b[k][j];
//            }
//            cout<<sum<<' ';
//        }
//        cout<<'\n';
//    }
//}
