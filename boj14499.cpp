////
////  boj14499.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/15.
////
//
//#include <iostream>
//
//using namespace std;
//int n,m;
//int board[21][21];
//
//int dx[4]={0,0,-1,1};
//int dy[4]={1,-1,0,0};
//
//int dice[4][3];
//
//void ud(int index){
//    int tmp[4];
//    for (int i = 0 ; i <4;i++){
//        tmp[i]=dice[i][1];
//    }
//    int num;
//    if (index==0){
//        num=3;
//    }else{
//        num=1;
//    }
//    for (int i = 0 ; i < 4;i++){
//        dice[i][1]=tmp[(num+i)%4];
//    }
//}
//void lr(int index){
//    int tmp[4];
//    for (int i = 0 ; i <3;i++){
//        tmp[i]=dice[1][i];
//    }
//    tmp[3]=dice[3][1];
//    if (index==0){
//        for (int i = 0 ; i <3;i++){
//            dice[1][i]=tmp[i+1];
//        }
//        dice[3][1]=tmp[0];
//    }else{
//        for (int i = 0 ; i <2;i++){
//            dice[1][i+1]=tmp[i];
//        }
//        dice[1][0]=tmp[3];
//        dice[3][1]=tmp[2];
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int x,y,k;
//    cin>>n>>m>>x>>y>>k;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            cin>>board[i][j];
//        }
//    }
//    while(k--){
//        int tmp;
//        cin>>tmp;
//        int nx=x+dx[tmp-1];
//        int ny=y+dy[tmp-1];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        x=nx;
//        y=ny;
//        if (tmp==1){
//            lr(1);
//        }else if(tmp==2){
//            lr(0);
//        }else if(tmp==3){
//            ud(0);
//        }else{
//            ud(1);
//        }
//        if (board[x][y]==0){
//            board[x][y]=dice[3][1];
//            cout<<dice[1][1]<<'\n';
//        }else{
//            dice[3][1]=board[x][y];
//            board[x][y]=0;
//            cout<<dice[1][1]<<'\n';
//        }
//    }
//    
//}
