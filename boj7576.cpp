////
////  boj7576.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/25.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n,m;
//int arr[1001][1001];
//int arr2[1001][1001];
//
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>m>>n;
//    queue<pair<int,int>> q;
//    
//    for (int i =0 ;i <n;i++){
//        for (int j=0;j<m;j++){
//            cin>>arr[i][j];
//            if (arr[i][j]==1){
//                q.push({i,j});
//            }
//            if (arr[i][j]==0){
//                arr2[i][j]=-1;
//            }
//        }
//    }
//    while (!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir = 0 ; dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (arr2[nx][ny]>=0)continue;
//            arr2[nx][ny]=arr2[x][y]+1;
//            q.push({nx,ny});
//        }
//    }
//    int ans=0;
//    for (int i =0;i<n;i++){
//        for (int j=0;j<m;j++){
//            if (arr2[i][j]==-1){
//                cout<<-1<<'\n';
//                return 0;
//            }
//            ans=max(ans,arr2[i][j]);
//        }
//    }
//    cout<<ans<<'\n';
//}
