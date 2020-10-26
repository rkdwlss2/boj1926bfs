////
////  boj4179.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/26.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n,m;
//int arr[1001][1001];
//int dfs1[1001][1001];
//int dfs2[1001][1001];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    queue<pair<int,int>> jq;
//    queue<pair<int,int>> fq;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ;j<m;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='#'){
//                arr[i][j]=3;
//            }
//            else if (tmp=='J'){
//                arr[i][j]=1;
//                jq.push({i,j});
//                dfs1[i][j]=1;
//            }
//            else if (tmp=='F'){
//                arr[i][j]=2;
//                fq.push({i,j});
//                dfs2[i][j]=1;
//            }
//        }
//    }
//    while(!fq.empty()){
//        auto now=fq.front();fq.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (arr[nx][ny]==3||dfs2[nx][ny]>0)continue;
//            dfs2[nx][ny]=dfs2[x][y]+1;
//            fq.push({nx,ny});
//        }
//    }
//    while(!jq.empty()){
//        auto now=jq.front();jq.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m){
//                cout<<dfs1[x][y]<<'\n';
//                return 0;
//            }
//            if (arr[nx][ny]==3||(dfs2[nx][ny]!=0&&dfs2[nx][ny]<=dfs1[x][y]+1)||dfs1[nx][ny]>0)continue;
//            dfs1[nx][ny]=dfs1[x][y]+1;
//            jq.push({nx,ny});
//        }
//    }
//    cout<<"IMPOSSIBLE"<<'\n';
//}
//
