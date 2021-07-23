//
//  boj20046.cpp
//  boj10039
//
//  Created by 강명진 on 2021/04/03.
//

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define INF 1e9
using namespace std;
int board[1001][1001];
vector<pair<pair<int,int>,int>> graph[1001][1001];
int d[1001][1001];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dijstra(int sx,int sy){
    priority_queue<pair<int,pair<int,int>>> pq;
    pq.push({-board[sx][sy],{sx,sy}});
    d[sx][sy]=board[sx][sy];
    while(!pq.empty()){
        int dist=-pq.top().first;
        int x=pq.top().second.first;
        int y= pq.top().second.second;
        pq.pop();
        if (dist>d[x][y])continue;
        for (int i = 0 ; i < graph[x][y].size();i++){
            int nx=graph[x][y][i].first.first;
            int ny=graph[x][y][i].first.second;
            int cost=dist+graph[x][y][i].second;
            if (cost<d[nx][ny]){
                d[nx][ny]=cost;
                pq.push({-cost,{nx,ny}});
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for (int i = 0 ; i<n;i++){
        for (int j = 0 ; j <m;j++){
            cin>>board[i][j];
        }
    }
    for (int i = 0 ; i < n;i++){
        for (int j =0 ;j<m;j++){
            if (board[i][j]==-1)continue;
            for (int dir=0;dir<4;dir++){
                int nx=i+dx[dir];
                int ny=j+dy[dir];
                if (nx<0||nx>=n||ny<0||ny>=m)continue;
                if (board[nx][ny]==-1)continue;
                graph[i][j].push_back({{nx,ny},board[nx][ny]});
            }
        }
    }
    for (int i = 0 ; i<1001;i++){
        for (int j = 0 ; j <1001;j++){
            d[i][j]=INF;
        }
    }
    dijstra(0,0);
    int answer=d[n-1][m-1];
    if (answer==INF){
        cout<<-1<<'\n';
    }else{
        cout<<d[n-1][m-1]<<'\n';
    }
}
