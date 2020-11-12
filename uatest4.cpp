//#include <string>
//#include <vector>
//#include <iostream>
//#include <queue>
//using namespace std;
//int N;
//const int center=30;
//int graph[92][92];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int check[92][92];
//int ans=0;
//int position[902][2];
//
//pair<int,int> bfs(int sx,int sy,int target){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    check[sx][sy]=0;
//    if (graph[sx][sy]==target){
//        ans+=check[sx][sy]+1;
//        return {sx,sy};
//    }
//    int count=0;
//    while (!q.empty()){
//        auto now = q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir =0;dir<4;dir++)
//        {
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<center-N||ny<center-N||nx>=center+2*N||ny>=center+2*N)continue;
//            if (check[nx][ny]>-1)continue;
//            check[nx][ny]=check[x][y]+1;
//            if (graph[nx][ny]==target){
//                ans+=check[nx][ny]+1;
//                return {nx,ny};
//            }
//            q.push({nx,ny});
//        }
//    }
//    return {sx,sy};
//}
//int solution(int n, vector<vector<int>> board) {
//    int answer = 0;
//    N=n;
//    for (int k=-1;k<=1;k++){
//        for (int l=-1;l<=1;l++){
//            for (int i = 0 ; i<n;i++){
//                for (int j=0;j<n;j++){
//                    graph[center+k*N+i][center+l*N+j]=board[i][j];
//                }
//            }
//        }
//    }
//    int nowx=center;
//    int nowy=center;
//    for (int k=1;k<=n*n;k++){
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j<n;j++){
//                if (k==board[i][j]){
//                    position[k][0]=i;
//                    position[k][1]=j;
//                }
//            }
//        }
//    }
//    for (int j = 0 ; j<92;j++){
//        fill(check[j],check[j]+92,-1);
//    }
//    bfs(nowx,nowy,1);
//    for (int i=2;i<=n*n;i++){
//        for (int j = 0 ; j<92;j++){
//            fill(check[j],check[j]+92,-1);
//        }
//        pair<int,int> tmp=bfs(nowx+position[i-1][0],nowy+position[i-1][1],i);
//        
//    }
//    return ans;
//}
//int main(){
//    vector<vector<int>> a={{3,5,6},{9,2,7},{4,1,8}};
//    cout<<solution(3,a)<<'\n';
//}
