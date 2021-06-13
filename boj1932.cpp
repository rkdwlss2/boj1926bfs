////
////  boj1932.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/23.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int n;
//int cache[501][501];
//int board[501][501];
//int solve(int x,int y){
//    if (x==n)return board[x][y];
//    int& ret=cache[x][y];
//    if (ret!=-1)return ret;
//    ret=0;
//    return ret=max(solve(x+1,y)+board[x][y],solve(x+1,y+1)+board[x][y]);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i=1;i<=n;i++){
//        for (int j =1;j<=i;j++){
//            cin>>board[i][j];
//        }
//    }
//    memset(cache,-1,sizeof(cache));
//    cout<<solve(1,1)<<'\n';
//}
