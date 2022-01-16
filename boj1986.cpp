//#include <iostream>
//
//using namespace std;
//int n,m,K,Q,P;
//
//int Knight[101][2];
//int Queen[101][2];
//int Pawn[101][2];
//
//int board[1001][1001];
//
//int KXmove[8]={1, 2, -1, -2, 1, 2, -1, -2};
//int KYmove[8]={2,1,-2,-1,-2,-1,2,1};
//
//int QXMove[8]={1,1,0,-1,-1,-1,0,1};
//int QYMove[8]={0,1,1,1,0,-1,-1,-1};
//
//
//void KnightCheck(int x,int y){
//    for (int dir=0;dir<8;dir++){
//        int nx=x+KXmove[dir];
//        int ny=y+KYmove[dir];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        if (board[nx][ny]>=2)continue;
//        board[nx][ny]=1;
//    }
//}
//
//void QueenCross(int x,int y,int dir){
//    int nowX=x;
//    int nowY=y;
//    while(true){
//        int nx=nowX+QXMove[dir];
//        int ny=nowY+QYMove[dir];
//        if (nx<0||nx>=n||ny<0||ny>=m)break;
//        if (board[nx][ny]>=2)break;
//        board[nx][ny]=1;
//        nowX=nx;
//        nowY=ny;
//    }
//}
//
//int main() {
//    cin>>n>>m;
//    cin>>Q;
//    for (int i = 0 ; i<Q;i++){
//        int a,b;
//        cin>>a>>b;
//        Queen[i][0]=a-1;
//        Queen[i][1]=b-1;
//        board[a-1][b-1]=2;
//    }
//    cin>>K;
//    for (int i = 0 ; i<K;i++){
//        int a,b;
//        cin>>a>>b;
//        Knight[i][0]=a-1;
//        Knight[i][1]=b-1;
//        board[a-1][b-1]=3;
//    }
//    cin>>P;
//    for (int i = 0 ; i<K;i++){
//        int a,b;
//        cin>>a>>b;
//        Pawn[i][0]=a-1;
//        Pawn[i][1]=b-1;
//        board[a-1][b-1]=4;
//    }
//    for (int i = 0 ; i <K;i++){
//        int x=Knight[i][0];
//        int y=Knight[i][1];
//        KnightCheck(x,y);
//    }
//    for (int i = 0 ;i<Q;i++){
//        int x=Queen[i][0];
//        int y=Queen[i][1];
//        for (int dir=0;dir<8;dir++){
//            QueenCross(x,y,dir);
//        }
//    }
//    int cnt=0;
//    for (int i = 0 ;i<n;i++){
//        for (int j = 0 ; j<m;j++){
//           // cout<<board[i][j]<<' ';
//            if (board[i][j]==0)cnt++;
//        }
//        //cout<<'\n';
//    }
//
//    cout<<cnt<<'\n';
//    return 0;
//}
//
