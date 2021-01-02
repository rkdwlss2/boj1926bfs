////
////  boj1080.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/01.
////
//
//#include <iostream>
//
//using namespace std;
//
//int n,m;
//int board[51][51];
//int answer[51][51];
//
//void flip(int x,int y){
//    for (int i=x;i<x+3;i++){
//        for (int j=y;j<y+3;j++){
//            board[i][j]=1-board[i][j];
//        }
//    }
//}
//bool check(){
//    for (int i=0;i<n;i++){
//        for (int j=0;j<m;j++){
//            if (board[i][j]!=answer[i][j])return false;
//        }
//    }
//    return true;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i=0;i<n;i++){
//        for (int j=0;j<m;j++){
//            char tmp;
//            cin>>tmp;
//            int a=tmp-'0';
//            board[i][j]=a;
//        }
//    }
//    for (int i=0;i<n;i++){
//        for (int j=0;j<m;j++){
//            char tmp;
//            cin>>tmp;
//            int a=tmp-'0';
//            answer[i][j]=a;
//        }
//    }
//    int count=0;
//    for (int i=0;i<n-2;i++){
//        for (int j=0;j<m-2;j++){
//            if (board[i][j]!=answer[i][j]){
//                flip(i,j);
//                count++;
//            }
//        }
//    }
//    if (check()==false){
//        cout<<-1<<'\n';
//    }else{
//        cout<<count<<'\n';
//    }
//    
//    
//    
//}
