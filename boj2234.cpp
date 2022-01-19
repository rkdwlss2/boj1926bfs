//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int n,m,Max=-1,Max2=-1;
//int board[51][51];
//
//int visited[51][51];
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//bool getTwo(int num, int dir) {
//   return num & (1 << dir);
//}
//
//int getMinus(int num, int dir) {
//   return num &=~(1<<dir);
//}
//
//int getPlus(int num, int dir) {
//   return num += (1 << dir);
//}
//
//void bfs(int sx,int sy) {
//   queue<pair<int, int>> q;
//   q.push({ sx,sy });
//    visited[sx][sy]=1;
//    int cnt=1;
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        int Num=board[x][y];
//        for (int dir = 0 ; dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]>0)continue;
//            if (!getTwo(Num,dir))continue;
//            cnt++;
//            visited[nx][ny]=visited[x][y]+1;
//            q.push({nx,ny});
//        }
//    }
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            cout<<board[i][j]<<' ';
//        }cout<<'\n';
//    }
//    cout<<"this is cnt== "<<cnt<<'\n';
//    if (Max2<cnt)Max2=cnt;
//}
//
//void bfs2(int sx,int sy) {
//   queue<pair<int, int>> q;
//   q.push({ sx,sy });
//    visited[sx][sy]=1;
//    int cnt=1;
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        int Num=board[x][y];
//        for (int dir = 0 ; dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]>0)continue;
//            if (!getTwo(Num,dir))continue;
//            cnt++;
//            visited[nx][ny]=visited[x][y]+1;
//            q.push({nx,ny});
//        }
//    }
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            cout<<board[i][j]<<' ';
//        }cout<<'\n';
//    }
//    cout<<"this is cnt== "<<cnt<<'\n';
//    if (Max<cnt)Max=cnt;
//}
//
//int main() {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//    cin>>m>>n;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            cin>>board[i][j];
//        }
//    }
//    int answer=0;
//    for (int i = 0 ; i< n;i++){
//        for (int j = 0 ; j <m;j++){
//            if (visited[i][j]>0)continue;
//            bfs2(i,j);
//            answer++;
//        }
//    }
//
//    
//    
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            for (int dir=0;dir<4;dir++){
//                int org=board[i][j];
//                board[i][j]=getMinus(board[i][j], dir);
//                for (int k = 0 ; k<n;k++){
//                    for (int l = 0 ; l<m;l++){
//                        visited[k][l]=0;
//                    }
//                }
//                
//                for (int k = 0 ; k<n;k++){
//                    for (int l = 0 ; l<m;l++){
//                        if (visited[k][l]>0)continue;
//                        bfs(k,l);
//                    }
//                }
//
//               
//                if (org!=board[i][j]){
//                    board[i][j]=getPlus(board[i][j], dir);
//                }
//                
//                
//            }
//        }
//    }
//    cout<<answer<<'\n';
//    cout<<Max<<'\n';
//    cout<<Max2<<'\n';
//}
