////
////  boj9207.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2022/01/13.
////
//
//#include <iostream>
//#include <queue>
//#include <unordered_map>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//int board[5][9];
//int pin[8][3];
//int ans2;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//unordered_map<int, int> um;
//priority_queue<pair<int,int>> pq;
//
//bool moveOk(int x,int y,int dir){
//    int nx=x+dx[dir];
//    int ny=y+dy[dir];
//    if (nx<0||nx>=5||ny<0||ny>=9)return false;
//    if (board[nx][ny]!=1)return false;
//    int nnx=nx+dx[dir];
//    int nny=ny+dy[dir];
//    if (nnx<0||nnx>=5||nny<0||nny>=9)return false;
//    if (board[nnx][nny]!=0)return false;
//    return true;
//}
//
//
//
//void go(int cnt){
//
//    for (int i = 0 ; i <5;i++){
//        for (int j = 0 ; j <9;j++){
//            if (board[i][j]==1){
//                int x=i;
//                int y=j;
//                for (int dir=0;dir<4;dir++){
//                    if (moveOk(x,y,dir)){
//                        int nx=x+dx[dir];
//                        int ny=y+dy[dir];
//                        int nnx=nx+dx[dir];
//                        int nny=ny+dy[dir];
//                        board[x][y]=0;
//                        board[nx][ny]=0;
//                        board[nnx][nny]=1;
//                        go(cnt+1);
//                        board[x][y]=1;
//                        board[nx][ny]=1;
//                        board[nnx][nny]=0;
//                    }
//                }
//            }
//        }
////        cout<<'\n';
//    }
//
//    ans2=max(ans2,cnt);
//}
//
//int main(){
//    int tc;
//    cin>>tc;
//    while(tc--){
//        ans2=-1;
//        int index=0;
//        for (int i = 0 ; i <5;i++){
//            for (int j = 0 ; j<9;j++){
//                char tmp;
//                cin>>tmp;
//                if (tmp=='o'){
//                    pin[index][0]=i;
//                    pin[index][1]=j;
//                    pin[index][2]=1;
//                    index++;
//                    board[i][j]=1;
//                }else if (tmp=='#'){
//                    board[i][j]=2;
//                }
//            }
//        }
//        go(0);
//        cout<<index-ans2<<' '<<ans2<<'\n';
//        for (int i = 0 ; i<5;i++){
//            fill(board[i],board[i]+9,0);
//        }
//        for (int i = 0 ;i<8;i++){
//            fill(pin[i],pin[i]+3,0);
//        }
//        while(!pq.empty()){
//            pq.pop();
//        }
//        um.clear();
//    }
//    
//}
