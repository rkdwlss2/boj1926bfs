//
//  boj23288.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2021/11/21.
//

#include <iostream>
#include <deque>
#include <cstring>
#include <queue>
using namespace std;
int n,m,k;
int board[21][21];
int rBoard[3][3];
int dial[4][3]={
    {0,2,0},
    {4,1,3},
    {0,5,0},
    {0,6,0}
};
int nowDirection = 0;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void rotate(){
    int tmp=dial[3][1];
    dial[3][1]=dial[1][2];
    dial[1][2]=dial[1][1];
    dial[1][1]=dial[1][0];
    dial[1][0]=tmp;
}

void move(int mod){
    if (mod==0){
        rotate();

    }else if (mod==1){
        deque<int> dq;
        for (int i = 0 ; i <=3;i++){
            dq.push_back(dial[i][1]);
        }
        int tmp=dq.back();
        dq.pop_back();
        dq.push_front(tmp);
        int index=0;
        while(!dq.empty()){
            dial[index][1]=dq.front();
            index++;
            dq.pop_front();
        }
    }else if (mod==2){
        for (int i = 0 ; i <3;i++){
            rotate();
        }
        
    }else{
        int tmp=dial[0][1];
        for (int i = 0 ;i<3;i++){
            dial[i][1]=dial[i+1][1];
        }
        dial[3][1]=tmp;
    }
}
bool visited[21][21];
int getScore(int sx,int sy){
    memset(visited,false,sizeof(visited));
    int num=1;
    visited[sx][sy]=true;
    queue<pair<int,int>> q;
    q.push({sx,sy});
    int color=board[sx][sy];
    while(!q.empty()){
        auto now=q.front();
        q.pop();
        int x=now.first;
        int y=now.second;
        for (int dir=0;dir<4;dir++){
            int nx=x+dx[dir];
            int ny=y+dy[dir];
            if (nx<0||nx>=n||ny<0||ny>=m)continue;
            if (visited[nx][ny]==true||color!=board[nx][ny])continue;
            visited[nx][ny]=true;
            num++;
            q.push({nx,ny});
        }
    }
    return num;
}

void getDirection(int x,int y){
    int A=dial[3][1];
    int B=board[x][y];
    if (A>B){
        nowDirection=(nowDirection+1)%4;
    }else if (A<B){
        nowDirection=(nowDirection+4-1)%4;
    }
}

void simulation(){
    int sum=0;
    int x=0,y=0;
    for (int i = 0;i<k;i++){
        int nx=x+dx[nowDirection];
        int ny=y+dy[nowDirection];
        if (nx<0||nx>=n||ny<0||ny>=m){
            nowDirection=(nowDirection+2)%4;
            nx=x+dx[nowDirection];
            ny=y+dy[nowDirection];
        }
        move(nowDirection);
        sum+=(getScore(nx,ny)*board[nx][ny]);
        getDirection(nx,ny);
        x=nx;
        y=ny;
    }
    cout<<sum<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    for (int i = 0 ; i<n;i++){
        for (int j = 0 ; j<m;j++){
            cin>>board[i][j];
        }
    }
    simulation();
    
}
