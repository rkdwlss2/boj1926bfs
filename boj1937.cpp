////
////  boj1937.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/13.
////
//
//#include <iostream>
//using namespace std;
//
//int n;
//int d[501][501];
//int a[501][501];
//const int dx[4]={0,0,1,-1};
//const int dy[4]={1,-1,0,0};
//int dp(int x,int y,int pre){
//    if (a[x][y]<=pre)return 0;
//    if (x<0||y<0||x>=n||y>=n)return 0;
//    int& ret=d[x][y];
//    if (ret!=1)return ret;
//    for (int dir = 0 ; dir<4;dir++){
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        ret=max(ret,dp(nx,ny,a[x][y])+1);
//    }
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j<n;j++){
//            cin>>a[i][j];
//        }
//    }
//    for (int i = 0 ; i < 501;i++){
//        fill(d[i],d[i]+501,1);
//    }
//    int ans=-1;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j<n;j++){
//            
//            int tmp=dp(i,j,-1);
//            if (ans==-1||ans<tmp){
//                ans=tmp;
//            }
//        }
//    }
//    cout<<ans<<'\n';
//}
