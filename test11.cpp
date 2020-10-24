////
////  test11.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/23.
////
//#include <iostream>
//#include <sstream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int n;
//int arr[11][11];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//int bfs(int x,int y){
//    queue<pair<int,int>> q;
//    q.push({x,y});
//    arr[x][y]=0;
//    int ans=1;
//    while (!q.empty()){
//        pair<int,int> now = q.front();q.pop();
//        for (int dir =0;dir<4;dir++){
//            int nx=now.first+dx[dir];
//            int ny=now.second+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=n)continue;
//            if (arr[nx][ny]==0)continue;
//            arr[nx][ny]=0;
//            ans++;
//            q.push({nx,ny});
//        }
//    }
//    return ans;
//}
//
//int main(){
//    cin>>n;
//    for (int i =0;i<n;i++){
//        for (int j=0;j<n;j++){
//            cin>>arr[i][j];
//        }
//    }
//    vector<int> an;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ;j<n;j++){
//            if (arr[i][j]==1){
//                an.push_back(bfs(i,j));
//            }
//        }
//    }
//    sort(an.begin(),an.end());
//    cout<<an.size()<<'\n';
//    for (auto i : an){
//        cout<<i<<' ';
//    }
//    cout<<'\n';
//}
