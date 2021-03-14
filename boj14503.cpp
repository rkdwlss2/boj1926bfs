////
////  boj14503.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/11.
////
//
//#include <iostream>
//using namespace std;
//
//int board[51][51];
//int dx[4]={1,0,-1,0};
//int dy[4]={0,-1,0,1};
//
//int n,m;
//
//int x,y;
//int dir;
//
//void clean(){
//    board[x][y]=2;
//}
//void num2(int index){
//    if (index==4){
//        if (board[x+dx[(dir+2)%4]][y+dy[(dir+2)%4]]==1){
//            return;
//        }else{
//            x=x-2*dx[(dir+2)%4];
//            y=y-2*dy[(dir+2)%4];
//            num2(0);
//        }
//    }
//    int nd=(dir+1)%4;
//    int nx=x+dx[nd];
//    int ny=y+dy[nd];
//    if (board[nx][ny]==0){
//        x=nx;
//        y=ny;
//        dir=nd;
//        clean();
//        num2(0);
//    }else{
//        num2(index+1);
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    cin>>x>>y>>dir;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            cin>>board[i][j];
//        }
//    }
//    clean();
//    num2(0);
//    int sum=0;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j <m;j++){
//            if (board[i][j]==2){
//                sum++;
//            }
//        }
//    }
//    cout<<sum<<'\n';
//}
