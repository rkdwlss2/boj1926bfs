////
////  boj17070.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/03/23.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int board[17][17];
//int cache[17][17][3];
//
//int go(int x,int y,int prev){
//    if (x<0||y<1)return 0;
//    if (x==0&&y==1)return 1;
//    if (board[x][y]==1)return 0;
//    int& ret=cache[x][y][prev];
//    if (ret!=-1)return ret;
//    ret =0;
//    if (prev==0||prev==2){
//        ret+=go(x,y-1,0);
//    }
//    ret+=go(x-1,y-1,2);
//    if (prev==1||prev==2){
//        ret+=go(x-1,y,1);
//    }
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout<<2/3<<'\n';
////    int n;
////    cin>>n;
////    for (int i = 0 ; i < n; i ++){
////        for (int j = 0 ; j < n;j++){
////            cin>>board[i][j];
////        }
////    }
////    memset(cache,-1,sizeof(cache));
////    cout<<go(n-1,n-1,2)<<'\n';
//}
