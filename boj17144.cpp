////
////  boj17144.cpp
////  boj10039
////
////  Created by 강명진 on 2021/04/03.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n,m,t;
//int board[51][51];
//int tboard[51][51];
//pair<int,int> a1;
//pair<int,int> a2;
//int dx[4]={0,-1,0,1};
//int dy[4]={1,0,-1,0};
//deque<int> dq;
//void go(int x,int y,int mod,int dir,int mod2){
//    if (mod==0&&x==a1.first&&y==a1.second)return;
//    if (mod==1&&x==a2.first&&y==a2.second)return;
//    if (mod2==0){
//        dq.push_back(board[x][y]);
//    }else{
//        int tmp=dq.front();
//        dq.pop_front();
//        board[x][y]=tmp;
//    }
//    
//    int nx=x+dx[dir];
//    int ny=y+dy[dir];
//    if ((nx<0||nx>=n||ny<0||ny>=m)&&mod==0){
//        dir++;
//        nx=x+dx[dir];
//        ny=y+dy[dir];
//    }else if ((nx<0||nx>=n||ny<0||ny>=m)&&mod==1){
//        dir=(dir+4-1)%4;
//        nx=x+dx[dir];
//        ny=y+dy[dir];
//    }
//    go(nx,ny,mod,dir,mod2);
//}
//
//void defuse(int x,int y){
//    int count=0;
//    int nowD=board[x][y];
//    int nD=board[x][y]/5;
//    if (nowD==-1||nowD==0)return;
//    for (int dir = 0 ; dir <4;dir++){
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        if (board[nx][ny]==-1)continue;
//        tboard[nx][ny]+=nowD/5;
//        count++;
//    }
//    board[x][y]=nowD-nD*count;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>t;
//    bool cl=false;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            cin>>board[i][j];
//            if (cl==false&&board[i][j]==-1){
//                a1={i,j};
//                cl=true;
//            }else if (cl==true&&board[i][j]==-1){
//                a2={i,j};
//            }
//        }
//    }
//    
//    while(t--){
//        
//        for (int i = 0 ; i <n;i++){
//            for (int j = 0 ; j <m;j++){
//                tboard[i][j]=0;
//            }
//        }
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j <m;j++){
//                defuse(i,j);
//            }
//        }
//        for (int i = 0 ; i <n;i++){
//            for (int j = 0 ; j <m;j++){
//                board[i][j]+=tboard[i][j];
//            }
//        }
//        
//        go(a1.first,a1.second+1,0,0,0);
//        int tmp=dq.back();
//        dq.pop_back();
//        dq.push_front(0);
//        go(a1.first,a1.second+1,0,0,1);
//        while(!dq.empty()){
//            dq.pop_front();
//        }
//        go(a2.first,a2.second+1,1,0,0);
//        tmp=dq.back();
//        dq.pop_back();
//        dq.push_front(0);
//        go(a2.first,a2.second+1,1,0,1);
//        while(!dq.empty()){
//            dq.pop_front();
//        }
//    }
//    
//    
//    
//    int sum=0;
//    for (int i = 0 ; i < n;i++){
//        for (int j =0  ; j < m;j++){
//            if (board[i][j]!=-1){
//                sum+=board[i][j];
//            }
//        }
//    }
//    cout<<sum<<'\n';
//}
