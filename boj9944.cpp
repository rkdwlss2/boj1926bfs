//#include <iostream>
//#include <string>
//using namespace std;
//int n,m;
//int board[31][31];
//int answer=1000001;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//pair<int,pair<int,int>> Fill(int sx,int sy,int dir){
//    int x=sx;
//    int y=sy;
//    int num=0;
//    int nx,ny;
//        while(true){
//            nx=x+dx[dir];
//            ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)break;
//            if (board[nx][ny]==1||board[nx][ny]>1)break;
//            board[nx][ny]=2;
//            x=nx;
//            y=ny;
//            num++;
//        }
//    return {num,{nx-dx[dir],ny-dy[dir]}};
//}
//
//void Delete(int sx,int sy,int dir,int num){
//    int x=sx;
//    int y=sy;
//        while(num>0){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            board[nx][ny]=0;
//            x=nx;
//            y=ny;
//            num--;
//        }
//}
//
//void go(int x,int y,int cnt){
//    bool Ok=false;
//    for (int dir=0;dir<4;dir++){
//        int nx=x+dir[dx];
//        int ny=y+dir[dy];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        if (board[nx][ny]==1||board[nx][ny]==2)continue;
//        Ok=true;
//        pair<int,pair<int,int>> now=Fill(x,y,dir);
//        int num=now.first;
//        int nextX=now.second.first;
//        int nextY=now.second.second;
//        go(nextX,nextY,cnt+1);
//        Delete(x,y,dir,num);
//    }
//    if (!Ok){
//        bool Ok2=false;
//        for (int i = 0 ; i <n;i++){
//            for (int j = 0 ; j <m;j++){
//                if (board[i][j]==0){
//                    Ok2=true;
//                    break;
//                }
//            }
//            if (Ok2)break;
//        }
//        if (!Ok2&&answer>cnt)answer=cnt;
//    }
//}
//
//int main(){
//    int index=1;
//    string str;
//    while (cin>>n>>m) {
//        for (int i = 0 ; i <n;i++){
//            for (int j = 0 ; j <m;j++){
//                char tmp;
//                cin>>tmp;
//                if (tmp=='.'){
//                    board[i][j]=0;
//                }else{
//                    board[i][j]=1;
//                }
//            }
//        }
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j <m;j++){
//                if (board[i][j]==0){
//                    board[i][j]=2;
//                    go(i,j,0);
//                    board[i][j]=0;
//                }
//            }
//        }
//
//        if (answer==1000001){
//            cout<<"Case "<<index<<": "<<-1<<'\n';
//        }else{
//            cout<<"Case "<<index<<": "<<answer<<'\n';
//        }
//        index++;
//        answer=1000001;
//    }
//}
