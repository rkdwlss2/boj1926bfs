////
////  boj2775.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/20.
////
//
//#include <iostream>
//using namespace std;
//
//int d[15][15];
//
//int dp(int x,int y){
//    if (y==1)return d[x][y]=1;
//    if (x==0)return d[x][y]=y;
//    if (d[x][y]>0)return d[x][y];
//    return d[x][y]=dp(x,y-1)+dp(x-1,y);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int c;
//    cin >>c;
//    while(c--){
//        int a,b;
//        cin>>a>>b;
//        cout<<dp(a,b)<<'\n';
//    }
//}
