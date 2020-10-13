////
////  baek1780make_paper.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/11.
////
//
//#include <iostream>
//using namespace std;
//int arr[2188][2188];
//int result[3];
//bool check(int x,int y,int n){
//    int tmp= arr[x][y];
//    for (int i = x ; i < x+n ;i++){
//        for (int j = y ; j < y+n;j++){
//            if (tmp!=arr[i][j]){
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//
//void divided(int x,int y,int n){
//    if (check(x,y,n)){
//        result[arr[x][y]]++;
//    }
//    else{
//        for (int i = 0 ; i < 3;i++){
//            for (int j = 0 ; j < 3;j++){
//                divided(x+n/3*i, y+n/3*j, n/3);
//            }
//        }
//    }
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j < n ;j++){
//            int tmp;
//            cin>>tmp;
//            tmp++;
//            arr[i][j]=tmp;
//        }
//    }
//    divided(0,0,n);
//    cout<<result[0]<<'\n';
//    cout<<result[1]<<'\n';
//    cout<<result[2]<<'\n';
//
//}
