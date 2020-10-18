////
////  programmersdeng.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/18.
////
//
//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//
//using namespace std;
//
//int M,N;
//bool visited[101][101];
//int arr[101][101];
//int dx[2]={0,1};
//int dy[2]={1,0};
//void go(int x,int y){
//    queue<pair<int,int>> q;
//    q.push({x,y});
//    visited[x][y]=true;
//    while (!q.empty()){
//        pair<int,int> now = q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int k = 0 ; k <2;k++){
//            int nx=x+dx[k];
//            int ny=y+dy[k];
//            if (nx>N||ny>M)continue;
//            if (arr[nx][ny]==-1)continue;
//            if (visited[nx][ny]==true)continue;
//            visited[nx][ny]=true;
//            arr[nx][ny]=arr[x][y]+1;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int solution(int m , int n , vector<vector<int>> puddles){
//    M=m;
//    N=n;
//    for (int i =0  ;i<puddles.size();i++){
//        arr[puddles[i][1]][puddles[i][0]]=-1;
//    }
//    go(1,1);
//    return (arr[N][M]-1)%1000000007;
//}
//
//int main(){
//    vector<vector<int>> puddles={{1,3},{3,1}};
//    cout<<solution(4,3,puddles);
//}
