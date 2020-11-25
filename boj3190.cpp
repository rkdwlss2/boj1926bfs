////
////  boj3190.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/25.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n;
//
//int board[101][101];
//int dx[4]={0,1,0,-1};
//int dy[4]={1,0,-1,0};
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    int m;
//    cin>>m;
//    for (int i = 0 ; i<m;i++){
//        int a,b;
//        cin>>a>>b;
//        board[a][b]=-1;
//    }
//    queue<pair<int,int>> q;
//    int k;
//    cin>>k;
//    for (int i=0;i<k;i++){
//        int a;
//        char b;
//        cin>>a>>b;
//        if (b=='D'){
//            q.push({a,0});
//        }else{
//            q.push({a,1});
//        }
//    }
//    
//    int time=0;
//    int rotationtime=q.front().first;
//    int rotationDirection=q.front().second;
//    q.pop();
//    int direction=0;
//    int x=1;
//    int y=1;
//    board[x][y]=time;
//    int snakelength=0;
//    bool finished=false;
//    while (true){
//        if (rotationtime==time){
//            if (rotationDirection==0){
//                direction+=1;
//                if (direction==4){
//                    direction=0;
//                }
//            }else{
//                direction-=1;
//                if(direction==-1){
//                    direction=3;
//                }
//            }if (!q.empty()){
//                rotationtime=q.front().first;
//                rotationDirection=q.front().second;
//                q.pop();
//            }
//        }
//        time++;
//        int nx=x+dx[direction];
//        int ny=y+dy[direction];
//        if (nx<1||nx>n||ny<1||ny>n){
//            cout<<time<<'\n';
//            finished=true;
//            break;
//        }
//        if (board[nx][ny]==-1){
//            snakelength++;
//        }
//        if (board[nx][ny]>0&&board[nx][ny]>=time-snakelength-1){
//            cout<<time<<'\n';
//            finished=true;
//            break;
//        }
//        board[nx][ny]=board[x][y]+1;
//        x=nx;
//        y=ny;
//    }
//}
