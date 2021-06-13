////
////  cf-691-b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/19.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int board[3000][3000];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    queue<pair<pair<int,int>,pair<int,int>>> q;
//    for (int i = 0 ; i<4;i++){
//        q.push({{1500,1500},{i,0}});
//    }
//    while (!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first.first;
//        int y=now.first.second;
//        int prevDir=now.second.first;
//        if (prevDir==0||prevDir==1){
//            for (int dir = 2 ; dir <4;dir++){
//                int nx=x+dx[dir];
//                int ny=y+dy[dir];
//                int count=now.second.second;
//                count++;
//                if (count==n){
//                    board[nx][ny]=1;
//                }else{
//                    q.push({{nx,ny},{dir,count}});
//                }
//            }
//        }else
//        {
//        for (int dir = 0 ; dir <2;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            int count=now.second.second;
//            count++;
//            if (count==n){
//                board[nx][ny]=1;
//            }else{
//                q.push({{nx,ny},{dir,count}});
//            }
//        }
//            
//        }
//    }
//    int ans=0;
//    for (int i = 0 ;i<3000;i++){
//        for (int j = 0 ; j<3000;j++){
//            if (board[i][j]==1){
//                ans++;
//            }
//        }
//    }
//    cout<<ans<<'\n';
//}
