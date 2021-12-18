////
////  boj2933.cpp
////a
//int board[101][101];
//int bfsBoard[101][101];
//bool visited[101][101];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int color =1;
//bool stonesOn(int mod){
//    int a=n-1;
//    for (int i = 0 ; i <m;i++){
//        if (bfsBoard[a][i]==mod){
//            return true;
//        }
//    }
//    return false;
//}
//
//int whosUp(){
//    for (int i = 1 ; i<=color ;i++){
//        if (!stonesOn(i))return i;
//    }
//    return -1;
//}
//
//
//
//bool stonesOnFloor(){
//    int a=n-1;
//    for (int i = 0 ; i <m;i++){
//        if (bfsBoard[a][i]==1){
//            return true;
//        }
//    }
//    return false;
//}
//
//int getHight(int y,int num){
//    bool getTwo=false;
//    int ind=-1;
//    int ind2=n;
//    for (int i = 0 ; i <n;i++){
//        if (bfsBoard[i][y]==num){
//            ind=i;
//            getTwo=true;
//        }
//    }
//    if (getTwo){
//        for (int i=ind+1;i<n;i++){
//            if (bfsBoard[i][y]!=num&&bfsBoard[i][y]!=0){
//                ind2=i;
//                break;
//            }
//        }
//        return ind2-ind-1;
//    }
//    return -1;
//}
//
//int findRocks(int row,int mod){
//    if (mod==0){
//        for (int i = 0 ; i <m;i++){
//            if (board[row][i]==1)return i;
//        }
//    }else{
//        for (int i=m-1;i>=0;i--){
//            if (board[row][i]==1)return i;
//        }
//    }
//    return 0;
//}
//
//void getDown(int y,int height,int who){
//    int tmp[101];
//    fill(tmp,tmp+n,0);
//    for (int i = 0;i<n;i++){
//        if (bfsBoard[i][y]==who){
//            board[i][y]=0;
//            if (i+height<n){
//                tmp[i+height]=1;
//            }
//        }
//
//    }
//    for (int i=0;i<n;i++){
//        if (tmp[i]==1||board[i][y]==1){
//            board[i][y]=1;
//        }
//
//    }
//}
//
//void bfs(int sx,int sy){
//
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=true;
//    bfsBoard[sx][sy]=color;
//    while(!q.empty()){
//        auto now=q.front();
//        q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]==true||board[nx][ny]==0)continue;
//            visited[nx][ny]=true;
//            bfsBoard[nx][ny]=color;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int main(){
//    cin>>n>>m;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j<m;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='.'){
//                board[i][j]=0;
//            }else{
//                board[i][j]=1;
//            }
//        }
//    }
//    int k;
//    cin>>k;
//    int leftRight=0;
//    for (int l = 0; l<k;l++){
//        int row;
//        cin>>row;
//        row=n-row;
//        int Rocks = findRocks(row,leftRight);
//        board[row][Rocks]=0;
//        leftRight=1-leftRight;
//        int cnt=0;
//        memset(visited,false,sizeof(visited));
//        color=1;
//        memset(bfsBoard,0,sizeof(bfsBoard));
//        for (int i = 0 ; i<n;i++){
//            for (int j = 0 ; j <m;j++){
//                if (board[i][j]==1&&visited[i][j]==false){
//                    bfs(i,j);
//                    cnt++;
//                    color++;
//                }
//            }
//        }
//        if (cnt>=1){
//            int who=whosUp();
//            if (who!=-1){
//                int small=987654321;
//                vector<int> h;
//                for (int i = 0 ; i <m;i++){
//                    int hgt=getHight(i,who);
//                    if (hgt==-1)continue;
//                    if (hgt<small)small=hgt;
//                    h.push_back(i);
//                }
//                for (auto i : h){
//                    getDown(i,small,who);
//                }
//
//            }
//        }
////        for (int i = 0 ; i<n;i++){
////            for (int j = 0 ; j<m;j++){
////                cout<<bfsBoard[i][j]<<' ';
////            }
////            cout<<'\n';
////        }
//    }
//
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            if (board[i][j]==1){
//                cout<<'x';
//            }else{
//                cout<<'.';
//            }
//        }
//        if (i==n-1)continue;
//        cout<<'\n';
//    }
//}
