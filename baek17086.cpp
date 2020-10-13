////
////  baek17086.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/07.
////
//
//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <queue>
//
//using namespace std;
//
//int n,m;
//int d[55][55];
//int a[55][55];
//int dx[8]={0,1,1,1,0,-1,-1,-1};
//int dy[8]={1,1,0,-1,-1,-1,0,1};
//
//int bfs(int sx,int sy){
//    for (int i=0;i<n;i++){
//        for (int j=0;j<m;j++){
//            d[i][j]=-1;
//        }
//    }
//    d[sx][sy]=0;
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    while (!q.empty()){
//        int x,y;
//        tie(x,y)=q.front();q.pop();
//        for (int k =0;k<8;k++){
//            int nx=x+dx[k];
//            int ny=y+dy[k];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (d[nx][ny]==-1){
//                if (a[nx][ny]==1){
//                    return d[x][y]+1;
//                }
//                else{
//                    d[nx][ny]=d[x][y]+1;
//                    q.push({nx,ny});
//                }
//            }
//        }
//        
//    }
//    
//    return 0;
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j <m;j++){
//            cin>>a[i][j];
//        }
//    }
//    int ans=0;
//    for (int i = 0 ; i<n;i++){
//        for (int j =0;j<m;j++){
//            if (a[i][j]==0){
//                int dist=bfs(i,j);
//                if (ans<dist)ans=dist;
//            }
//        }
//    }
//    cout<<ans<<'\n';
//}
