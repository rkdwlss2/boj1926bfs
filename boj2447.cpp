////
////  boj2447.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/30.
////
//
//#include <iostream>
//
//using namespace std;
//
//int dvided[2188][2188];
//
//void div1(int x,int y,int n){
//    if (n==1){
//        dvided[x][y]=1;
//        return;
//    }
//    
//    n=n/3;
//    for (int i = 0 ;i<3;i++){
//        for (int j = 0 ;j<3;j++){
//            if (i==1&&j==1){
//                continue;
//            }
//            div1(x+(n*i),y+(n*j),n);
//        }
//    }
//    
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    div1(0,0,n);
//    for (int i = 0 ;i<n;i++){
//        for (int j = 0 ;j<n;j++){
//            if (dvided[i][j]==1){
//                cout<<'*';
//            }
//            else{
//                cout<<' ';
//            }
//        }
//        cout<<'\n';
//    }
//}
