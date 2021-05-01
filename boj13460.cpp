////
////  boj13460.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/27.
////
//
//#include <iostream>
//
//using namespace std;
//int n,m;
//int board[11][11];
//int saveBoard[11][11];
//char set[5]={'.','#','R','B','O'};
//int rx,ry;
//int bx,by;
//int ox,oy;
//
//void rotate(){
//    int tmpboard[11][11];
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < m;j++){
//            tmpboard[i][j]=board[i][j];
//        }
//    }
//    for (int i = 0 ; i < n;i++){
//        for (int j =0;j<m;j++){
//            board[i][j]=tmpboard[n-j-1][i];
//        }
//    }
//}
//
//void save(int Mod){
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < m;j++){
//            if (Mod==0){
//                saveBoard[i][j]=board[i][j];
//            }else{
//                board[i][j]=saveBoard[i][j];
//            }
//        }
//    }
//}
//
//void move(int rb){
//    int x,y;
//    if (rb==0){
//        x=rx;
//        y=ry;
//    }else{
//        x=bx;
//        y=by;
//    }
//    int nx=x;
//    int ny=y+1;
//    if (rb==0){
//        rx=nx;
//        ry=ny;
//    }else{
//        bx=nx;
//        by=ny;
//    }
//}
//
//int next(int rb){
//    int x,y;
//    if (rb==0){
//        x=rx;
//        y=ry;
//    }else{
//        x=bx;
//        y=by;
//    }
//    int nx=x;
//    int ny=y+1;
//    if (board[nx][ny]=='#'){
//        return -1;
//    }
//    else if (board[nx][ny]=='O') return 1;
//    else if (board[nx][ny]=='R'&&rb==1&&next(1-rb)==0){
//        move(rb);
//        return 0;
//    }
//    else if (board[nx][ny]=='B'&&rb==0&&next(1-rb)==0){
//        move(rb);
//        return 0;
//    }else if (board[nx][ny]=='.'){
//        move(rb);
//        return 0;
//    }
//    return -1;
//}
//
//void tilt(int rb){
//    while(true){
//        int a=next(0);
//        int b=next(1);
//        if (a==-1&&b==-1)break;
//    }
//}
//
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j <m;j++){
//            char tmp;
//            cin>>tmp;
//            for (int k = 0 ; k <5 ;k++){
//                if (tmp==set[i]){
//                    if (k==2){
//                        bx=i;
//                        by=j;
//                    }else if (k==3){
//                        rx=i;
//                        ry=j;
//                    }else if (k==4){
//                        ox=i;
//                        oy=j;
//                    }else{
//                        board[i][j]=k;
//                    }
//                }
//            }
//        }
//    }
//    
//    
//    
//}
