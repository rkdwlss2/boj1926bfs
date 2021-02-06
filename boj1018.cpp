////
////  boj1018.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/02/05.
////
//
//#include <iostream>
//
//using namespace std;
//int n,m;
//
//int board[51][51];
//
//int check(int x,int y,int b){
//    int count=0;
//    for (int i = x ; i<x+8;i++){
//        for (int j = y;j<y+8;j++){
//            if ((i+j)%2==0&&b!=board[i][j]){
//                count++;
//            }
//            else if ((i+j)%2==1&&b==board[i][j]){
//                count++;
//            }
//        }
//    }
//    return count;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            board[i][j]=-1;
//        }
//    }
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j<m;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='B'){
//                board[i][j]=0;
//            }else{
//                board[i][j]=1;
//            }
//        }
//    }
//    int answer=987654321;
//    for (int i=0;i<n-7;i++){
//        for (int j = 0 ;j<m-7;j++){
//            int a=min(check(i, j, 0),check(i,j,1));
//            if (answer>a)answer=a;
//        }
//    }
//    cout<<answer<<'\n';
//    
//}
