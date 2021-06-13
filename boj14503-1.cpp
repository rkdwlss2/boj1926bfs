////
////  boj14503-1.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/14.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int board[51][51];
//
//pair<int,int> robot;
//int di;
//
//int dx[4]={-1,0,1,0};
//int dy[4]={0,1,0,-1};
//
//void clean(int x,int y){
//    board[x][y]=2;
//}
//void check(int index){
//    int x=robot.first;
//    int y=robot.second;
//    int nx=x+dx[(di-1+4)%4];
//    int ny=y+dy[(di-1+4)%4];
//    int ch=board[nx][ny];
//    int bx=x+dx[(di+2)%4];
//    int by=y+dy[(di+2)%4];
//    if (index!=4&&ch==0){
//        di=(di-1+4)%4;
//        clean(nx,ny);
//        robot.first=nx;
//        robot.second=ny;
//        check(0);
//    }
//    else if (index!=4&&(ch==1||ch==2)){
//        di=(di-1+4)%4;
//        check(index+1);
//    }
//    else if (index==4&&board[bx][by]==1){
//        return;
//    }else{
//        robot.first=bx;
//        robot.second=by;
//        check(0);
//    }
//    
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    int x,y;
//    cin>>x>>y>>di;
//    robot=make_pair(x,y);
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < m;j++){
//            cin>>board[i][j];
//        }
//    }
//    clean(x,y);
//    check(0);
//    int sum=0;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < m;j++){
//            if (board[i][j]==2){
//                sum++;
//            }
//        }
//    }
//    cout<<sum<<'\n';
//}
