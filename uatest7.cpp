////
////  uatest7.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/07.
////
//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//
//using namespace std;
//int N;
//int graph[101][101];
//int dx[2]={1,-1};
//int dy[2]={-1,1};
//void bfs(int sx,int sy,bool hori){
//    queue<pair<int,int>> q;
//    graph[sx][sy]=0;
//    int down=0;
//    if (hori==true){
//        sy=sy+1;
//        down=1-down;
//    }
//    graph[sx][sy]=1;
//    q.push({sx,sy});
//    while (!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y =now.second;
//        if (x==N-1&&y==N-1)break;
//        int nx,ny;
//        if (down==1){
//            nx=x+dx[0];
//            ny=y+dy[0];
//        }else{
//            nx=x+dx[1];
//            ny=y+dy[1];
//        }
//        if (nx>=N||ny>=N){
//            if (down==1){
//                down=1-down;
//                ny=y+1;
//                nx=x;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }else{
//                down=1-down;
//                nx=x+1;
//                ny=y;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }
//        }
//        else if (nx<0||ny<0){
//            if (down==1){
//                down=1-down;
//                ny=y;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }else{
//                down=1-down;
//                nx=x;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }
//        }
//        else{
//            graph[nx][ny]=graph[x][y]+2;
//            q.push({nx,ny});
//        }
//    }
//}
//void bfs2(int sx,int sy){
//    queue<pair<int,int>> q;
//    graph[sx][sy]=0;
//    int down=0;
//    sx=sx+1;
//    graph[sx][sy]=1;
//    q.push({sx,sy});
//    while (!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y =now.second;
//        if (x==N-1&&y==N-1)break;
//        int nx,ny;
//        if (down==1){
//            nx=x+dx[0];
//            ny=y+dy[0];
//        }else{
//            nx=x+dx[1];
//            ny=y+dy[1];
//        }
//        if (nx>=N||ny>=N){
//            if (down==1){
//                down=1-down;
//                ny=y+1;
//                nx=x;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }else{
//                down=1-down;
//                nx=x+1;
//                ny=y;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }
//        }
//        else if (nx<0||ny<0){
//            if (down==1){
//                down=1-down;
//                ny=y;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }else{
//                down=1-down;
//                nx=x;
//                graph[nx][ny]=graph[x][y]+1;
//                q.push({nx,ny});
//            }
//        }
//        else{
//            graph[nx][ny]=graph[x][y]+2;
//            q.push({nx,ny});
//        }
//    }
//}
//
//
//vector<vector<int>> solution(int n, bool horizontal) {
//    vector<vector<int>> answer(n,vector<int>(n,0));
//    N=n;
//    for (int i = 0 ; i<101;i++){
//        fill(graph[i],graph[i]+101,-1);
//    }
//    if (horizontal==true){
//        bfs(0,0,horizontal);
//    }
//    else{
//        bfs2(0, 0);
//    }
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <n;j++){
//            answer[i][j]=graph[i][j];
//        }
//    }
//    return answer;
//}
//
//int main(){
//    bool hori=false;
//    vector<vector<int>> answer=solution(5,hori);
//    for (auto i : answer){
//        for (auto j : i){
//            cout<<j<<' ';
//        }
//        cout<<'\n';
//    }
//}
