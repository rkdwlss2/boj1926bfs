////
////  boj16956.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/27.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n,m;
//int arr[501][501];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//void bfs(int x,int y){
//    queue<pair<int,int>> q;
//    q.push({x,y});
//    arr[x][y]=3;
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (arr[nx][ny]>0)continue;
//            arr[nx][ny]=3;
//            q.push({nx,ny});
//        }
//    }
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i < n ; i++){
//        for (int j =0;j<m;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='S'){
//                arr[i][j]=1;
//            }
//            else if(tmp=='W'){
//                arr[i][j]=2;
//            }
//        }
//    }
//    for (int i = 0 ; i<n;i++){
//        for (int j=0;j<m;j++){
//            if (arr[i][j]==0){
//                bfs(i,j);
//            }
//            else if (arr[i][j]==1){
//                for (int dir =0;dir<4;dir++){
//                    int nx=i+dx[dir];
//                    int ny=j+dy[dir];
//                    if (nx<0||nx>=n||ny<0||ny>=m)continue;
//                    if (arr[nx][ny]==2){
//                        cout<<0<<'\n';
//                        return 0;
//                    }
//                }
//            }
//            else if (arr[i][j]==2){
//                for (int dir =0;dir<4;dir++){
//                    int nx=i+dx[dir];
//                    int ny=j+dy[dir];
//                    if (nx<0||nx>=n||ny<0||ny>=m)continue;
//                    if (arr[nx][ny]==1){
//                        cout<<0<<'\n';
//                        return 0;
//                    }
//                }
//            }
//        }
//    }
//    
//    cout<<1<<'\n';
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < m;j++){
//            if (arr[i][j]==3){
//                cout<<'D';
//            }
//            else if (arr[i][j]==2){
//                cout<<'W';
//            }
//            else if (arr[i][j]==1)cout<<'S';
//            else cout<<'.';
//        }
//        cout<<'\n';
//    }
//    
//}
